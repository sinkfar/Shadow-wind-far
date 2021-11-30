/*
	System main.c

		sinkfarli 系统首界面模块,也是程序的入口！

*/


#include "System main.h"


int main(void)
{
	First_interface();
	return 0;
}


/*
	void First_interface_view(void)

		功能：首界面视图
*/
void First_interface_view(void)
{
	printf("/****************************************/\n");
	printf("              Sinkfar System              \n");
	printf("/****************************************/\n");
	printf("请用键盘输入对应数字选择:\n");
	printf("\n");
	printf("             1.用户登录\n");
	printf("             2.功能还未开放\n");
	printf("             3.功能还未开放\n");
	printf("             4.退出系统\n");
	printf("\n");
	printf("/****************************************/\n");
	printf("\n");
	printf("请选择：");
}


/*
	void First_interface(void)

		功能：首界面程序
*/
void First_interface(void)
{

	int Userchoose;//选择
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
			printf("功能还未开放\n");
			break;
		case 3:
			printf("功能还未开放\n");
			break;
		case 4:
			exit(0);//功能：关闭所有文件，终止正在执行的程序
		default:
			printf("选择错误请重新选择！\n");
			Sleep(3000);
			break;
		}
	}
}