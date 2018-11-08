#include "Includes.h"
#include "Utils.h"
#include "File.h"

#include "Payload.h"

void payload_t::InstallSyscall(int syscall, uint32_t size, uint64_t offset)
{
	uint64_t syscall_table = get_syscall_table();
	uint64_t opdStructure = offset + size + 0x10;
	pokelv2(opdStructure, offset);
	pokelv2(syscall_table + (8 * syscall), opdStructure);
}

void payload_t::InstallPayload(char* path, uint32_t size)
{
	payload = (uint64_t*)malloc(size);
	File::ReadFile(path, payload, size);

	for (int i = 0; i < (size / 8); i++) 
	{
		pokelv2(0x80000000007E4D70ULL + (i * 8), payload[i]);
	}
	InstallSyscall(526, size, 0x80000000007E4D70ULL);
	
	free(payload);
}

void payload_t::InitPayload()
{
	if (!Injected) 
	{
		fwVer = get_lv2_version();
		
		sprintf(path, "/dev_hdd0/tmp/payload_%X.bin", fwVer);
		
		printf("Loading %s\n", path);

		PayloadSize = File::GetPayloadSize(path);
		
		InstallPayload(path, PayloadSize);

		//Exports.Notify(0, "[Paradox V5] : Initialized");

		Injected = true;
	}
}

sys_prx_id_t payload_t::prx_load_module(sys_pid_t processID, char* path)
{
	system_call_3(526, 0x4FF, (uint64_t)processID, (uint64_t)path);
	return_to_user_prog(sys_pid_t);
}

int payload_t::prx_unload_module(sys_pid_t pid, sys_prx_id_t prx_id)
{
	system_call_3(526, 0x4FE, (uint64_t)pid, (uint64_t)prx_id);
	return_to_user_prog(int);
}