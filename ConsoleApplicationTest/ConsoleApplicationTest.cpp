// ConsoleApplicationTest.cpp : 定义控制台应用程序的入口点。
//
#pragma once
#include "stdafx.h"

#include "CalcTest.h"

int _tmain(int argc, _TCHAR* argv[])
{
	testing::InitGoogleTest(&argc, argv);
	RUN_ALL_TESTS();
	return 0;
}

