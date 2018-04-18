// LeetCode.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include "Problem 10-Regular Expression Matching/Solution10.h"

int _tmain(int argc, _TCHAR* argv[])
{
	Solution10 sln;
	string s = "aab";
	string p = "c*a*b";
	sln.Solution(s, p);
	return 0;
}

