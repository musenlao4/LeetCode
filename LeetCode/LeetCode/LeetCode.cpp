// LeetCode.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include "Problem 20-Valid Parentheses/Solution20.h"
#include "common/common.h"
#include <algorithm>

void test20()
{
	Solution20 sln;
	string input{"([]{})"};
	bool bRet = sln.isValid(input);
	printf("");
}

int _tmain(int argc, _TCHAR* argv[])
{
	test20();
	getchar();
	return 0;
}