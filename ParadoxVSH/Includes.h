#ifndef INCLUDES_H
#define INCLUDES_H

#include <ppu_intrinsics.h>
#include <wchar.h>
#include <sys/prx.h>
#include <stdlib.h>
#include <sys/syscall.h>
#include <sys/ppu_thread.h>
#include <string.h>
#include <sys/sys_time.h>
#include <sys/time_util.h>
#include <stdarg.h>
#include <assert.h>
#include <sys/process.h>
#include <sys/memory.h>
#include <sys/timer.h>
#include <sys/return_code.h>
#include <sys/prx.h>
#include <stddef.h>
#include <math.h>
#include <stdarg.h>
#include <cellstatus.h>
#include <typeinfo>
#include <vector>
#include <pthread.h>
#include <locale.h>
#include <cell/error.h>
#include <sys/paths.h>
#include <time.h>
#include <cellstatus.h>
#include <sys/prx.h>
#include <fastmath.h>
#include <sys\moduleexport.h>
#include <sys\console.h>
#include <cell\sysmodule.h>
#include <sys/paths.h> 
#include <sys/fs.h> 
#include <sys/fs_external.h> 
#include <cell/cell_fs.h>
#include <cell/fs/cell_fs_file_api.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa\inet.h>
#include <ctype.h>
#include <ppu_asm_intrinsics.h>


#define MOUNT_POINT "/dev_hdd0/tmp"


extern "C" 
{
	int _sys_printf(const char *fmt, ...);
	int _sys_snprintf(char *, size_t, const char*, ...);
	int _sys_sprintf(char *, const char*, ...);
	void *_sys_malloc(size_t);
	void _sys_free(void *);

}

#define printf _sys_printf
#define snprintf _sys_snprintf
#define sprintf _sys_sprintf
#define malloc _sys_malloc
#define free _sys_free


#define CFW_SDK_VERSION_446C 0x446C
#define CFW_SDK_VERSION_450C 0x450C
#define CFW_SDK_VERSION_453C 0x453C
#define CFW_SDK_VERSION_455C 0x455C
#define CFW_SDK_VERSION_460C 0x460C
#define CFW_SDK_VERSION_465C 0x465C
#define CFW_SDK_VERSION_470C 0x470C
#define CFW_SDK_VERSION_475C 0x475C
#define CFW_SDK_VERSION_476C 0x476C
#define CFW_SDK_VERSION_478C 0x478C

#define CFW_SDK_VERSION_446D 0x446D
#define CFW_SDK_VERSION_450D 0x450D
#define CFW_SDK_VERSION_453D 0x453D
#define CFW_SDK_VERSION_455D 0x455D
#define CFW_SDK_VERSION_460D 0x460D
#define CFW_SDK_VERSION_465D 0x465D
#define CFW_SDK_VERSION_470D 0x470D
#define CFW_SDK_VERSION_475D 0x475D
#define CFW_SDK_VERSION_476D 0x476D
#define CFW_SDK_VERSION_478D 0x478D
#define CFW_SDK_VERSION_480D 0x480D
#define CFW_SDK_VERSION_482D 0x482D

#define CFW_446_DEX_PID_ADDR 0x8000000000508C0CULL
#define CFW_450_DEX_PID_ADDR 0x8000000000510C0CULL
#define CFW_455_DEX_PID_ADDR 0x8000000000518C14ULL
#define CFW_460_DEX_PID_ADDR 0x8000000000518C14ULL
#define CFW_465_DEX_PID_ADDR 0x8000000000518C0CULL
#define CFW_470_DEX_PID_ADDR 0x8000000000518C0CULL
#define CFW_475_DEX_PID_ADDR 0x8000000000518C0CULL
#define CFW_476_DEX_PID_ADDR 0x8000000000518C0CULL
#define CFW_478_DEX_PID_ADDR 0x8000000000518C0CULL
#define CFW_480_DEX_PID_ADDR 0x8000000000518C0CULL
#define CFW_482_DEX_PID_ADDR 0x8000000000518C0CULL

#endif INCLUDES_H

