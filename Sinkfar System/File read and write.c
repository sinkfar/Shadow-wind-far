/*
	File read and write.c

		sinkfarli ϵͳ�ļ���дģ��

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
		printf("���ļ��ɹ�\n");
	}
	else
	{
		printf("���ļ�ʧ��\n");
	}
	fclose(f);
}
