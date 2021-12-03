/*
	System home.h
		
		System home.c 函数声明和相关的宏定义模块
*/

#pragma warning(disable:4067)//warning C4067: 预处理器指令后有意外标记 - 应输入换行符

#ifndef System home.h
#define System home.h

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <Windows.h>
#include <winnt.h>

#include "Frist interface bank.h"
#include "File read and write.h"

 void System_home_view(void);
 void System_home_program(void);

#endif
