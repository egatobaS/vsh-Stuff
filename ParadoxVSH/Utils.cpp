#include "Includes.h"
#include "Utils.h"
#include "Payload.h"

sys_pid_t ProcessID;
sys_pid_t vshPID;

/*void * operator new (std::size_t sz)
{
	void *p;

	if (sz == 0)
		sz = 1;

	p = malloc(sz);

	return p;
}

void operator delete (void *ptr)
{
	free(ptr);
}
*/

void sleep(usecond_t time) 
{
	sys_timer_usleep(time * 1000);
}

int32_t write_process(sys_pid_t pid, uint64_t ea, const void * data, uint32_t size)
{
	system_call_4(905, (uint64_t)pid, ea, size, (uint64_t)data);
	return_to_user_prog(int32_t);
}

int32_t read_process(sys_pid_t pid, uint64_t ea, const void * data, uint32_t size)
{
	system_call_4(904, pid, ea, size, (uint64_t)data);
	return_to_user_prog(int32_t);
}

int32_t syscall_sys_ppu_thread_exit( uint64_t reason)
{
	system_call_1(0x029, reason);
	return_to_user_prog(int32_t);
}

uint64_t peeklv2(uint64_t addr)
{
	system_call_1(6, addr);
	return_to_user_prog(uint64_t);
}

int pokelv2(uint64_t addr, uint64_t val)
{
	system_call_2(7, addr, val);
}

int sys_sm_shutdown(uint16_t op, const void * lpar_parameter, uint64_t parameter_size)
{
	system_call_3(0x17B, (uint64_t)op, (uint64_t)lpar_parameter, (uint64_t)parameter_size);
	return_to_user_prog(int);
}

int get_lv2_version()
{
	uint64_t toc = peeklv2(0x8000000000003000ULL);

	switch (toc)
	{
	case 0x800000000034AC80ULL:
		return 0x355D;
		break;
	case 0x8000000000363E80ULL:
		return 0x421D;
		break;
	case 0x8000000000365CA0ULL:
		return 0x430D;
		break;
	case 0x80000000003665C0ULL:
		return 0x441D;
		break;
	case 0x8000000000366BD0ULL:
		return 0x446D;
		break;
	case 0x800000000036EC40ULL:
		return 0x450D;
		break;
	case 0x8000000000370620ULL:
		return 0x453D;
		break;
	case 0x80000000003738E0ULL:
		return 0x455D;
		break;
	case 0x800000000034F950ULL:
		return 0x460C;
		break;
	case 0x8000000000375500ULL:
		return 0x460D;
		break;
	case 0x8000000000375510ULL:
		return (peeklv2(0x800000000031EBA8ULL) == 0x323031342F31312FULL) ? 0x466D : 0x465D;
		break;
	case 0x8000000000375850ULL:
		return 0x470D;
		break;
	case 0x80000000003758E0ULL:
		return (peeklv2(0x800000000031EF48ULL) == 0x323031352F30382FULL) ? 0x476D : (peeklv2(0x800000000031EF48ULL) == 0x323031352F31322FULL) ? 0x478D : 0x475D;
		break;
	case 0x80000000003759B0ULL:
		return 0x480D;

	case 0x80000000003759C0ULL:
		return 0x482D;
	default:
		return 0;
		break;
	}
	return 0;
}

void SysGetPid()
{
	switch (get_lv2_version())
	{
	case CFW_SDK_VERSION_446D:
		ProcessID = peeklv2(CFW_446_DEX_PID_ADDR);
		break;
	case CFW_SDK_VERSION_450D:
		ProcessID = peeklv2(CFW_450_DEX_PID_ADDR);
		break;
	case CFW_SDK_VERSION_455D:
		break;
	case CFW_SDK_VERSION_460D:
		break;
	case CFW_SDK_VERSION_465D:
		ProcessID = peeklv2(CFW_465_DEX_PID_ADDR);
		break;
	case CFW_SDK_VERSION_470D:
		ProcessID = peeklv2(CFW_470_DEX_PID_ADDR);
		break;
	case CFW_SDK_VERSION_475D:
		ProcessID = peeklv2(CFW_475_DEX_PID_ADDR);
		break;
	case CFW_SDK_VERSION_476D:
		ProcessID = peeklv2(CFW_476_DEX_PID_ADDR);
		break;
	case CFW_SDK_VERSION_478D:
		ProcessID = peeklv2(CFW_478_DEX_PID_ADDR);
		break;
	case CFW_SDK_VERSION_480D:
		ProcessID = peeklv2(CFW_480_DEX_PID_ADDR);
		break;
	case CFW_SDK_VERSION_482D:
		ProcessID = peeklv2(CFW_482_DEX_PID_ADDR);
		break;
	}

}

uint64_t get_syscall_table()
{
	int version = get_lv2_version();
	switch (version)
	{
	case 0x355C:
		return 0x8000000000346570ULL;
		break;
	case 0x355D:
		return 0x8000000000361578ULL;
		break;
	case 0x421C:
		return 0x800000000035BCA8ULL;
		break;
	case 0x421D:
		return 0x800000000037A1B0ULL;
		break;
	case 0x430C:
		return 0x800000000035DBE0ULL;
		break;
	case 0x430D:
		return 0x800000000037C068ULL;
		break;
	case 0x431C:
		return 0x800000000035DBE0ULL;
		break;
	case 0x440C:
		return 0x800000000035E260ULL;
		break;
	case 0x441C:
		return 0x800000000035E260ULL;
		break;
	case 0x441D:
		return 0x800000000037C9E8ULL;
		break;
	case 0x446C:
		return 0x800000000035E860ULL;
		break;
	case 0x446D:
		return 0x800000000037CFE8ULL;
		break;
	case 0x450C:
		return 0x800000000035F0D0ULL;
		break;
	case 0x450D:
		return 0x8000000000383658ULL;
		break;
	case 0x453C:
		return 0x800000000035F300ULL;
		break;
	case 0x453D:
		return 0x8000000000385108ULL;
		break;
	case 0x455C:
		return 0x8000000000362680ULL;
		break;
	case 0x455D:
		return 0x8000000000388488ULL;
		break;
	case 0x460C:
		return 0x8000000000363A18ULL;
		break;
	case 0x460D:
		return 0x800000000038A120ULL;
		break;
	case 0x465D:
		return 0x800000000038A120ULL;
		break;
	case 0x466C:
		return 0x8000000000363A18ULL;
		break;
	case 0x466D:
		return 0x800000000038A120ULL;
		break;
	case 0x470C:
		return 0x8000000000363B60ULL;

		break;
	case 0x470D:
		return 0x800000000038A368ULL;

		break;
	case 0x475D:
		return 0x800000000038A3E8ULL;

	case 0x476D:
		return 0x800000000038A3E8ULL;

	case 0x478D:
		return 0x800000000038A3E8ULL;

	case 0x480D:
		return 0x800000000038A4E8ULL;

	case 0x482D:
		return 0x800000000038A4E8ULL;

	default:
		return 0;
		break;
	}
	return 0;
}

char *doXor(char *szEncrypt)
{
	char buffer[1024];
	for (int i = 0; i < strlen(szEncrypt); i++) {
		buffer[i] = szEncrypt[i] ^ 0x40;
	}
	buffer[strlen(szEncrypt)] = '\0';
	return buffer;
}

int returnvalue;
int Atoi(const char *c) 
{
	returnvalue = 0;
	int value = 0;
	int sign = 1;
	if (*c == '+' || *c == '-') {
		if (*c == '-') sign = -1;
		c++;
	}
	while (isdigit(*c)) {
		value *= 10;
		value += (int)(*c - '0');
		c++;
	}
	returnvalue = value * sign;
	return returnvalue;
}

opd_s * exports_t::find_export(const char* module, uint32_t fnid)
{
	exportStructure temp = exports;
	while (temp->ssize == 0x1C00) {
		if (!strcmp(module, temp->name)) {
			for (int16_t i = 0; i < temp->exports; i++) {
				if (temp->fnid[i] == fnid)
					return temp->stub[i];
			}
		}
		temp++;
	}
	return NULL;
}

void exports_t::LoadExports()
{
	exportStructure temp_exp = *(exportStructure*)((*(uint32_t*)0x1008C) + 0x984);

	while ((--temp_exp)->ssize == 0x1C00);
	exports = temp_exp + 1;

	Notify = (int(*)(int, const char*))find_export("vshtask", 0xA02D46E7);
}