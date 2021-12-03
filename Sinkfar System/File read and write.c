/*
	File read and write.c

		sinkfarli 系统文件读写模块

*/


#include "File read and write.h"


/*

*/
void Write_File()
{
	FILE* f;
	f = fopen("file.txt", "w");
	if (f != NULL)
	{
		printf("打开文件成功\n");
	}
	else
	{
		printf("打开文件失败\n");
	}
	fclose(f);
}
