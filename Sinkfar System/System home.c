/*
	System home.c

		sinkfarli ϵͳ���ܽ���ģ��

*/


#include "System home.h"


/*
	void System_home_view(void)

		���ܣ�ϵͳ��ҳ��ͼ
*/
void System_home_view(void)//
{
	printf("/****************************************/\n");
	printf("              Sinkfar System              \n");
	printf("                 ϵͳ��ҳ                 \n");
	printf("/****************************************/\n");
	printf("                 �����б�                 \n");
	printf("\n");
	printf("                    1.                    \n");
	printf("\n");
	printf("���ü��������Ӧ����ѡ��:\n");
}


/*
	void System_home_program(void)

		���ܣ�ϵͳ��ҳ������
*/
void System_home_program(void)
{
	int userchoose;
	while (1)
	{
		system("CLS");
		System_home_view();
		scanf("%d", &userchoose);
		switch (userchoose)
		{
			case 1:
				break;
			case 2:
				break;
			case 3:
				break;
			case 4:
				break;
			case 5:
				break;
			default:
				printf("ѡ�����������ѡ��\n");
				Sleep(3000);
				break;
		}
	}
}