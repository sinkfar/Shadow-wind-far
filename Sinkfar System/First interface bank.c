/*
	First interface bank.c

		sinkfarli 系统登入界面模块

*/

#include "Frist interface bank.h"
#include "System home.h"


int User;
int Password;

char AccountUser[2];
char AccountPassword[3];

char AdminAccountUser[2] = {'l','i'};               //错误记录：数组写法如果是char AdminAccountUser[2] = {'li'}，会出现 l 或 i 数据从int到char类型转换异常从而导致stcmp函数比对返回-1或1
char AdminAccountPassword[3] =  {'a','d','c'};



/*
	void  User_login_interface_view(void)

		功能：用户登入界面
*/
void  User_login_interface_view(void)  
{
	printf("/****************************************/\n");
	printf("              Sinkfar System              \n");
	printf("               用户登入界面               \n");
	printf("/****************************************/\n");
	printf("请用键盘输入对应数字选择:\n");
	printf("\n");
	printf("             1.管理员登录\n");
	printf("             2.普通用户登入\n");
	printf("             3.新用户注册\n");
	printf("             4.返回上一级\n");
	printf("             5.退出系统\n");
	printf("\n");
	printf("/****************************************/\n");
	printf("\n");
	printf("请选择：");
}


/*
	void AdminAccount_login_view(void)

		功能：管理员登录界面
*/
void AdminAccount_login_view(void)
{
	printf("/****************************************/\n");
	printf("              Sinkfar System              \n");
	printf("            管理员登入界面结果            \n");
	printf("/****************************************/\n");
	printf("请用键盘输入对应信息:\n");
	printf("\n");
}


/*
	void Login_succeed_view(void)

		功能：管理员登录成功界面
*/
void Login_succeed_view(void)
{
	printf("/****************************************/\n");
	printf("              Sinkfar System              \n");
	printf("            管理员登入界面结果            \n");
	printf("/****************************************/\n");
	printf("\n");
	printf("              管理员登录成功              \n");
	printf("          正在进入系统请等待 5 秒         \n");
	printf("\n");
	printf("/****************************************/\n");
}


/*
	void Login_fail_view(void)

		功能：管理员登录失败界面
*/
void Login_fail_view(void)
{
	printf("/****************************************/\n");
	printf("              Sinkfar System              \n");
	printf("                  登入结果                \n");
	printf("/****************************************/\n");
	printf("\n");
	printf("                 登录失败                 \n");
	printf("              请等待重新登入              \n");
	printf("\n");
	printf("/****************************************/\n");
}


/*
	void User_login_program(viod)

		功能：用户登入界面程序
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
				printf("             用户名：");
				scanf("%s", &AccountUser);
				printf("\n");
				User=strcmp(AdminAccountUser, AccountUser);     //这里一定要用一个int变量来装strcmp的返回值，如果直接将strcmp放在if（）里会导致strcmp返回值混乱

				//这里的两个gets函数独立使用会报错,两个一起使用第一个会报错
				/*gets(AccountUser);
				User =strcmp(AccountUser, AdminAccountUser);*/

				printf("               密码：");
				scanf("%s", &AccountPassword);
				printf("\n");

				Password=strcmp(AdminAccountPassword, AccountPassword);
				if (User==0 && Password==0)
				{
					system("CLS");
					Login_succeed_view();
					Sleep(5000);
					System_home_program();//进入系统
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
				printf("选择错误请重新选择！\n");
				Sleep(3000);
				break;
		}
	}	
}