/*
	First interface bank.c

		sinkfarli ϵͳ�������ģ��

*/

#include "Frist interface bank.h"
#include "System home.h"


int User;
int Password;

char AccountUser[2];
char AccountPassword[3];

char AdminAccountUser[2] = {'l','i'};               //�����¼������д�������char AdminAccountUser[2] = {'li'}������� l �� i ���ݴ�int��char����ת���쳣�Ӷ�����stcmp�����ȶԷ���-1��1
char AdminAccountPassword[3] =  {'a','d','c'};



/*
	void  User_login_interface_view(void)

		���ܣ��û��������
*/
void  User_login_interface_view(void)  
{
	printf("/****************************************/\n");
	printf("              Sinkfar System              \n");
	printf("               �û��������               \n");
	printf("/****************************************/\n");
	printf("���ü��������Ӧ����ѡ��:\n");
	printf("\n");
	printf("             1.����Ա��¼\n");
	printf("             2.��ͨ�û�����\n");
	printf("             3.���û�ע��\n");
	printf("             4.������һ��\n");
	printf("             5.�˳�ϵͳ\n");
	printf("\n");
	printf("/****************************************/\n");
	printf("\n");
	printf("��ѡ��");
}


/*
	void AdminAccount_login_view(void)

		���ܣ�����Ա��¼����
*/
void AdminAccount_login_view(void)
{
	printf("/****************************************/\n");
	printf("              Sinkfar System              \n");
	printf("            ����Ա���������            \n");
	printf("/****************************************/\n");
	printf("���ü��������Ӧ��Ϣ:\n");
	printf("\n");
}


/*
	void Login_succeed_view(void)

		���ܣ�����Ա��¼�ɹ�����
*/
void Login_succeed_view(void)
{
	printf("/****************************************/\n");
	printf("              Sinkfar System              \n");
	printf("            ����Ա���������            \n");
	printf("/****************************************/\n");
	printf("\n");
	printf("              ����Ա��¼�ɹ�              \n");
	printf("          ���ڽ���ϵͳ��ȴ� 5 ��         \n");
	printf("\n");
	printf("/****************************************/\n");
}


/*
	void Login_fail_view(void)

		���ܣ�����Ա��¼ʧ�ܽ���
*/
void Login_fail_view(void)
{
	printf("/****************************************/\n");
	printf("              Sinkfar System              \n");
	printf("                  ������                \n");
	printf("/****************************************/\n");
	printf("\n");
	printf("                 ��¼ʧ��                 \n");
	printf("              ��ȴ����µ���              \n");
	printf("\n");
	printf("/****************************************/\n");
}


/*
	void User_login_program(viod)

		���ܣ��û�����������
*/
void User_login_program(viod)
{
	while (1)
	{
		system("CLS");
		User_login_interface_view();
		int UserChoose;
		scanf("%d", &UserChoose);
		switch (UserChoose)
		{
			case 1:
				system("CLS");
				AdminAccount_login_view();
				printf("             �û�����");
				scanf("%s", &AccountUser);
				printf("\n");
				User=strcmp(AdminAccountUser, AccountUser);     //����һ��Ҫ��һ��int������װstrcmp�ķ���ֵ�����ֱ�ӽ�strcmp����if������ᵼ��strcmp����ֵ����

				//���������gets��������ʹ�ûᱨ��,����һ��ʹ�õ�һ���ᱨ��
				/*gets(AccountUser);
				User =strcmp(AccountUser, AdminAccountUser);*/

				printf("               ���룺");
				scanf("%s", &AccountPassword);
				printf("\n");

				Password=strcmp(AdminAccountPassword, AccountPassword);
				if (User==0 && Password==0)
				{
					system("CLS");
					Login_succeed_view();
					Sleep(5000);
					System_home_program();//����ϵͳ
				}
				else
				{
					system("CLS");
					Login_fail_view();
					Sleep(4000);
				}
				break;
			case 2:
				Write_File();
				Sleep(1000);
				break;
			case 3:
				break;
			case 4:
				system("CLS");
				First_interface();
				break;
			case 5:
				exit(0);
				break;
			default:
				printf("ѡ�����������ѡ��\n");
				Sleep(3000);
				break;
		}
	}	
}