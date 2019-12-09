// LeetCode.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include "Problem 18-4Sum/Solution18.h"
#include "common/common.h"
#include <algorithm>

int _tmain(int argc, _TCHAR* argv[])
{
	Solution18 sln;
	vector<int> input{ -1, 2, 2, -5, 0, -1, 4 };
	vector<vector<int>> vec{ sln.fourSum(input, 3) };
	getchar();

	return 0;
}