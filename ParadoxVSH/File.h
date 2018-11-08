namespace File
{
	void Delete(char *path);

	void CreateWrite(int sock, bool doSprx = false);

	int GetPayloadSize(char *Path);

	void ReadFile(char* Path, uint64_t* buff, size_t size);

	static int isMounted(const char *path);

	bool ReadKeyFromFS();

};
