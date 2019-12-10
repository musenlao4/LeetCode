// LeetCode.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include "Problem 20-Valid Parentheses/Solution20.h"
#include "Problem 21-Merge Two Sorted Lists/Solution21.h"
#include "Problem 22-Generate Parentheses/Solution22.h"
#include "common/common.h"
#include <algorithm>

void test20()
{
	Solution20 sln;
	string input{"([]{})"};
	bool bRet = sln.isValid(input);
	printf("");
}

void test21()
{
	using namespace MySolution21;
	ListNode *l1{ new ListNode{ 1 } };
	ListNode *p{ l1 };
	p->next = new ListNode{ 2 };
	p = p->next;
	p->next = new ListNode{ 4 };
	p = p->next;

	ListNode *l2{ new ListNode{ 1 } };
	p = l2;
	p->next = new ListNode{ 3 };
	p = p->next;
	p->next = new ListNode{ 5 };
	p = p->next;

	Solution21 sln;
	sln.mergeTwoLists(l1, l2);
	printf("");
}

void test22()
{
	Solution22 sln;
	vector<string> vec{ sln.generateParenthesis(3) };
	printf("");
}

int _tmain(int argc, _TCHAR* argv[])
{
	test22();
	getchar();
	return 0;
}