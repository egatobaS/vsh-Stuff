#ifndef PAYLOAD_H
#define PAYLOAD_H

class payload_t
{
public:
	short fwVer;
	bool Injected;
	char path[0x32];
	uint64_t *payload;
	size_t PayloadSize;

	int prx_unload_module(sys_pid_t pid, sys_prx_id_t prx_id);

	void InstallSyscall(int syscall, uint32_t size, uint64_t offset);
	void InstallPayload(char* path, uint32_t size);

	void InitPayload();


	bool ModuleLoaded;
	sys_prx_id_t prx_load_module(sys_pid_t processID, char* path);
};

#endif