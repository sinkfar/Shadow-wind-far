/*
	System home.c

		sinkfarli 系统功能界面模块

*/


#include "System home.h"


/*
	void System_home_view(void)

		功能：系统首页视图
*/
void System_home_view(void)//
{
	printf("/****************************************/\n");
	printf("              Sinkfar System              \n");
	printf("                 系统首页                 \n");
	printf("/****************************************/\n");
	printf("                 功能列表                 \n");
	printf("\n");
	printf("                    1.                    \n");
	printf("\n");
	printf("请用键盘输入对应数字选择:\n");
}


/*
	void System_home_program(void)

		功能：系统首页主程序
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
				printf("选择错误，请重新选择\n");
				Sleep(3000);
				break;
		}
	}
}