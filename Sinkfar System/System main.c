/*
	System main.c

		sinkfarli ϵͳ�׽���ģ��,Ҳ�ǳ������ڣ�

*/


#include "System main.h"


int main(void)
{
	First_interface();
	return 0;
}


/*
	void First_interface_view(void)

		���ܣ��׽�����ͼ
*/
void First_interface_view(void)
{
	printf("/****************************************/\n");
	printf("              Sinkfar System              \n");
	printf("/****************************************/\n");
	printf("���ü��������Ӧ����ѡ��:\n");
	printf("\n");
	printf("             1.�û���¼\n");
	printf("             2.���ܻ�δ����\n");
	printf("             3.���ܻ�δ����\n");
	printf("             4.�˳�ϵͳ\n");
	printf("\n");
	printf("/****************************************/\n");
	printf("\n");
	printf("��ѡ��");
}


/*
	void First_interface(void)

		���ܣ��׽������
*/
void First_interface(void)
{

	int Userchoose;//ѡ��
	while (1)
	{
		First_interface_view();
		scanf("%d", &Userchoose);
		switch (Userchoose)
		{
		case 1:
			User_login_program();
			system("CLS");
			break;
		case 2:
			printf("���ܻ�δ����\n");
			break;
		case 3:
			printf("���ܻ�δ����\n");
			break;
		case 4:
			exit(0);//���ܣ��ر������ļ�����ֹ����ִ�еĳ���
		default:
			printf("ѡ�����������ѡ��\n");
			Sleep(3000);
			break;
		}
	}
}