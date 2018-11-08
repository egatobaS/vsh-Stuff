#include "Includes.h"
#include "Utils.h"

#include "File.h"

namespace File 
{
	void Delete(char *path) 
	{
		cellFsUnlink(path);
	}

	

	int GetPayloadSize(char *Path)
	{
		CellFsStat buf;
		cellFsStat(Path, &buf);
		return buf.st_size;
	}

	void ReadFile(char* Path, uint64_t* buff, size_t size)
	{
		char *data = (char*)malloc(size);

		int fd;
		uint64_t sw;
		uint64_t pos;
		if (cellFsOpen(Path, CELL_FS_O_RDONLY, &fd, NULL, 0) == CELL_FS_SUCCEEDED)
		{
			if (cellFsRead(fd, data, size, &sw) == CELL_FS_SUCCEEDED) {
				memcpy((void*)buff, (void*)data, size);
			}
			cellFsClose(fd);
			free(data);
		}
		free(data);
	}

	static int isMounted(const char *path)
	{
		int i, err;
		CellFsStat status;

		for (i = 0; i < 15; i++) {
			err = cellFsStat(path, &status);
			if (err == CELL_FS_SUCCEEDED)
				return 1;
		}
		return 0;
	}

}
