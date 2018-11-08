#define MOUNT_POINT					"/dev_hdd0/tmp"


struct opd_s 
{
	uint32_t sub;
	uint32_t toc;
};

struct moduleFnid_s
{
	uint32_t fnid;
	char module[0];
};

typedef struct
{
	int16_t ssize;
	int16_t header1;
	int16_t header2;
	int16_t exports;
	int32_t zero1;
	int32_t zero2;
	const char* name;
	uint32_t* fnid;
	opd_s** stub;
} *exportStructure;

extern sys_pid_t ProcessID;
extern sys_pid_t vshPID;

/*void * operator new (std::size_t sz);
void operator delete (void *ptr);*/

void sleep(usecond_t time);

int32_t write_process(sys_pid_t pid, uint64_t ea, const void * data, uint32_t size);
int32_t read_process(sys_pid_t pid, uint64_t ea, const void * data, uint32_t size);

uint64_t peeklv2(uint64_t addr);
int pokelv2(uint64_t addr, uint64_t val);

int sys_sm_shutdown(uint16_t op, const void * lpar_parameter, uint64_t parameter_size);

int get_lv2_version();
void SysGetPid();
uint64_t get_syscall_table();

char *doXor(char *szEncrypt);

int Atoi(const char *c);

class exports_t
{
public:
	exportStructure exports;
	opd_s * find_export(const char* module, uint32_t fnid);
	int(*Notify)(int, const char*);

	void LoadExports();
};

extern exports_t Exports;