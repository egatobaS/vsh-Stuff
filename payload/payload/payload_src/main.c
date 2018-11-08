#include <lv2/lv2.h>
#include <lv2/libc.h>
#include <lv2/memory.h>
#include <lv2/syscall.h>
#include <lv2/process.h>
#include <lv2/modules.h>
#include <lv2/error.h>
#include <lv2/symbols.h>

#define SYSCALL_LOAD_PRX_WITH_PID                   0x4FF
#define SYSCALL_START_PRX_WITH_PID                  0x4EE
#define SYSCALL_GET_PROCESS_WITH_PID                526

process_t _get_process_by_pid(uint32_t pid)
{
	uint64_t *proc_list = *(uint64_t **)MKA(TOC+process_rtoc_entry_1);	
	proc_list = *(uint64_t **)proc_list;
	proc_list = *(uint64_t **)proc_list;	
	for (int i = 0; i < 16; i++)
	{
		process_t p = (process_t)proc_list[1];	
		proc_list += 2;		
		if ((((uint64_t)p) & 0xFFFFFFFF00000000ULL) != MKA(0)) continue;
		if (p->pid == pid) return p;
	}
	return ESRCH;
}






int load_module_to_pid(char *path, uint32_t pid)
{
	void *kbuf, *vbuf;
	int ret;	
	uint64_t meminfo[5];
	uint32_t toc[2];
	meminfo[0] = sizeof(meminfo);
	meminfo[1] = 1;
	sys_prx_id_t prx = prx_load_module(_get_process_by_pid(pid), 0, 0, path);
	return prx_start_module_with_thread(prx, _get_process_by_pid(pid), 0, 0);
}

int syscall_handle(uint64_t function, uint64_t param1, uint64_t param2, uint64_t param3, uint64_t param4, uint64_t param5, uint64_t param6, uint64_t param7)
{
	extend_kstack(0);
	switch (function)
	{
		case SYSCALL_LOAD_PRX_WITH_PID:
			return load_module_to_pid((char*)param1, (uint32_t)param2);
	}
	return ENOSYS;
}


