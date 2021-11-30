/*
	Frist interface bank.h

		First interface bank.c 函数声明和相关的宏定义模块
*/

#pragma warning(disable:4067)//warning C4067: 预处理器指令后有意外标记 - 应输入换行符

#ifndef Frist interface bank.h
#define Frist interface bank.h

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <Windows.h>

#include "System main.h"

void  User_login_interface_view(void);
void AdminAccount_login_view(void);
void Login_succeed_view(void);
void Login_fail_view(void);
void User_login_program(viod);

#endif


