// LeetCode.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include "Problem 17-Letter Combinations of a Phone Number/Solution17.h"
#include "common/common.h"
#include <algorithm>

int _tmain(int argc, _TCHAR* argv[])
{
	Solution17 sln;
	std::string strInput{ "23" };
	std::vector<std::string> vec{ sln.letterCombinationsEx(strInput) };
	getchar();

	return 0;
}

