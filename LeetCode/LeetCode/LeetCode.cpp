// LeetCode.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include "headers.h"
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

void test23()
{
	using namespace MySolution23;
	ListNode *l1{ new ListNode{ 1 } };
	ListNode *p{ l1 };
	p->next = new ListNode{ 4 };
	p = p->next;
	p->next = new ListNode{ 5 };
	p = p->next;

	ListNode *l2{ new ListNode{ 1 } };
	p = l2;
	p->next = new ListNode{ 3 };
	p = p->next;
	p->next = new ListNode{ 4 };
	p = p->next;

	ListNode *l3{ new ListNode{2} };
	p = l3;
	p->next = new ListNode{ 6 };
	p = p->next;

	Solution23 sln;
	vector<ListNode *> vec{};
	//vec.emplace_back(l1);
	//vec.emplace_back(l2);
	//vec.emplace_back(l3);
	ListNode *pRet{ sln.mergeKLists(vec) };
	printf("");
}

void test24()
{
	using namespace MySolution24;
	ListNode *l{ new ListNode{ 1 } };
	ListNode *p{ l };
	p->next = new ListNode{ 4 };
	p = p->next;
	p->next = new ListNode{ 5 };
	p = p->next;
	p->next = new ListNode{ 6 };
	p = p->next;
	p->next = new ListNode{ 7 };
	p = p->next;

	Solution24 sln;
	ListNode *pRet{ sln.swapPairs(l) };
	printf("");
}

void test25()
{
	using namespace MySolution25;
	ListNode *l{ new ListNode{ 1 } };
	ListNode *p{ l };
	p->next = new ListNode{ 4 };
	p = p->next;
	p->next = new ListNode{ 5 };
	p = p->next;
	p->next = new ListNode{ 6 };
	p = p->next;
	p->next = new ListNode{ 7 };
	p = p->next;

	Solution25 sln;
	ListNode *pRes{ sln.reverseKGroup(l, 3) };
	printf("");
}

int _tmain(int argc, _TCHAR* argv[])
{
	test25();
	getchar();
	return 0;
}