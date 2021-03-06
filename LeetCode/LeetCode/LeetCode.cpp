// LeetCode.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include "headers.h"
#include "common/common.h"
#include "common/operation_math.h"
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

void test26()
{
	Solution26 sln;
	vector<int> vec{ 1, 1, 2, 3, 6 };
	int size{ sln.removeDuplicates(vec) };
	printf("");
}

void test27()
{
	Solution27 sln;
	vector<int> vec{ 1, 1, 2, 3, 6 };
	int size{ sln.removeElement(vec, 1) };
	printf("");
}

void test28()
{
	Solution28 sln;
	int pos{ sln.strStr("abcdef", "cd") };
	printf("");
}

void test29()
{
	Solution29 sln;
	int a{ 0 };
	int b{ -1 };
	int res{ sln.divide(numeric_limits<int>::min(), b) };
	printf("");
}

//"abababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababab"
//["ab", "ba", "ab", "ba", "ab", "ba", "ab", "ba", "ab", "ba", "ab", "ba", "ab", "ba", "ab", "ba", "ab", "ba", "ab", "ba", "ab", "ba", "ab", "ba", "ab", "ba", "ab", "ba", "ab", "ba", "ab", "ba", "ab", "ba", "ab", "ba", "ab", "ba", "ab", "ba", "ab", "ba", "ab", "ba", "ab", "ba", "ab", "ba", "ab", "ba", "ab", "ba", "ab", "ba", "ab", "ba", "ab", "ba", "ab", "ba", "ab", "ba", "ab", "ba", "ab", "ba", "ab", "ba", "ab", "ba", "ab", "ba", "ab", "ba", "ab", "ba", "ab", "ba", "ab", "ba", "ab", "ba", "ab", "ba", "ab", "ba", "ab", "ba", "ab", "ba", "ab", "ba", "ab", "ba", "ab", "ba", "ab", "ba", "ab", "ba", "ab", "ba", "ab", "ba", "ab", "ba", "ab", "ba", "ab", "ba", "ab", "ba", "ab", "ba", "ab", "ba", "ab", "ba", "ab", "ba", "ab", "ba", "ab", "ba", "ab", "ba", "ab", "ba", "ab", "ba", "ab", "ba", "ab", "ba", "ab", "ba", "ab", "ba", "ab", "ba", "ab", "ba", "ab", "ba", "ab", "ba", "ab", "ba", "ab", "ba", "ab", "ba", "ab", "ba", "ab", "ba", "ab", "ba", "ab", "ba", "ab", "ba", "ab", "ba", "ab", "ba", "ab", "ba", "ab", "ba", "ab", "ba", "ab", "ba", "ab", "ba", "ab", "ba", "ab", "ba", "ab", "ba", "ab", "ba", "ab", "ba", "ab", "ba", "ab", "ba", "ab", "ba", "ab", "ba", "ab", "ba", "ab", "ba", "ab", "ba"]

void test30()
{
	Solution30 sln;
	vector<string> words{ "ab", "ba", "ab", "ba", "ab", "ba", "ab", "ba", "ab", "ba", "ab", "ba", "ab", "ba", "ab", "ba", "ab", "ba", "ab", "ba", "ab", "ba", "ab", "ba", "ab", "ba", "ab", "ba", "ab", "ba", "ab", "ba", "ab", "ba", "ab", "ba", "ab", "ba", "ab", "ba", "ab", "ba", "ab", "ba", "ab", "ba", "ab", "ba", "ab", "ba", "ab", "ba", "ab", "ba", "ab", "ba", "ab", "ba", "ab", "ba", "ab", "ba", "ab", "ba", "ab", "ba", "ab", "ba", "ab", "ba", "ab", "ba", "ab", "ba", "ab", "ba", "ab", "ba", "ab", "ba", "ab", "ba", "ab", "ba", "ab", "ba", "ab", "ba", "ab", "ba", "ab", "ba", "ab", "ba", "ab", "ba", "ab", "ba", "ab", "ba", "ab", "ba", "ab", "ba", "ab", "ba", "ab", "ba", "ab", "ba", "ab", "ba", "ab", "ba", "ab", "ba", "ab", "ba", "ab", "ba", "ab", "ba", "ab", "ba", "ab", "ba", "ab", "ba", "ab", "ba", "ab", "ba", "ab", "ba", "ab", "ba", "ab", "ba", "ab", "ba", "ab", "ba", "ab", "ba", "ab", "ba", "ab", "ba", "ab", "ba", "ab", "ba", "ab", "ba", "ab", "ba", "ab", "ba", "ab", "ba", "ab", "ba", "ab", "ba", "ab", "ba", "ab", "ba", "ab", "ba", "ab", "ba", "ab", "ba", "ab", "ba", "ab", "ba", "ab", "ba", "ab", "ba", "ab", "ba", "ab", "ba", "ab", "ba", "ab", "ba", "ab", "ba", "ab", "ba", "ab", "ba", "ab", "ba", "ab", "ba" };
	vector<int> res{ sln.findSubstring("abababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababababab", words) };
	printf("");
}

void test31()
{
	Solution31 sln;
	vector<int> vec{ 3, 2, 1, };
	sln.nextPermutation(vec);
	printf("");
}

void test32()
{
	Solution32 sln;
	int length{ sln.longestValidParentheses("(((())(((()())") };
	printf("");
}

void test33()
{
	Solution33 sln;
	vector<int> vec{ 1,2,3,6,7,9 };
	int pos{ sln.search(vec, 0) };
	printf("");
}

void test34()
{
	Solution34 sln;
	vector<int> vec{ 0,0,0,1,2,3 };
	vector<int> range{ sln.searchRange(vec, 0) };
	printf("");
}

void test35()
{
	Solution35 sln;
	vector<int> vec{ 1, 3 };
	int target{ 3 };
	int pos{ sln.searchInsert(vec, target) };
	printf("");
}

void test36()
{
	Solution36 sln;
	vector< vector<char>> board
	{
		{'8','3','.','.','7','.','.','.','.'},
		{'6','.','.','1','9','5','.','.','.'},
		{'.','9','8','.','.','.','.','6','.'},
		{'8','.','.','.','6','.','.','.','3'},
		{'4','.','.','8','.','3','.','.','1'},
		{'7','.','.','.','2','.','.','.','6'},
		{'.','6','.','.','.','.','2','8','.'},
		{'.','.','.','4','1','9','.','.','5'},
		{'.','.','.','.','8','.','.','7','9'}
	};
	bool isValid{ sln.isValidSudoku(board) };
	printf("");
}

void test37()
{
	Solution37 sln;
	vector< vector<char>> board
	{
		{'.','.','.','2','.','.','.','6','3'},
		{'3','.','.','.','.','5','4','.','1'},
		{'.','.','1','.','.','3','9','8','.'},
		{'.','.','.','.','.','.','.','9','.'},
		{'.','.','.','5','3','8','.','.','.'},
		{'.','3','.','.','.','.','.','.','.'},
		{'.','2','6','3','.','.','5','.','.'},
		{'5','.','3','7','.','.','.','.','8'},
		{'4','7','.','.','.','1','.','.','.'}
	};
	sln.solveSudoku(board);
	printf("");
}

void test38()
{
	Solution38 sln;
	string res{ sln.countAndSay(6) };
	printf("");
}

void test39()
{
	Solution39 sln;
	vector<int> input{ 2, 3, 5 };
	int target{ 8 };
	vector<vector<int>> res{ sln.combinationSum(input, target) };
	printf("");
}

void test40()
{
	Solution40 sln;
	vector<int> input{ 2,5,2,1,2 };
	int target{ 5 };
	vector<vector<int>> res{sln.combinationSum2(input, target)};
	printf("");
}

void test41()
{
	Solution41 sln;
	vector<int> input{ 7,8,9,11,12 };
	int missing{ sln.firstMissingPositive(input) };
	printf("");
}

void test42()
{
	Solution42 sln;
	vector<int> input{ 0,1,0,2,1,0,1,3,2,1,2,1 };
	int water{ sln.trap(input) };
	printf("");
}

void test43()
{
	Solution43 sln;
	string res{ sln.multiply("123", "456") };
	printf("");
}

void test44()
{
	Solution44 sln;
	//"abefcdgiescdfimde"
	//"ab*cd?i*de"

	// "ab"
	// "*?*?*"
	bool isMatch{ sln.isMatch("abbbb", "?*b**") };
	printf("");
}

void test45()
{
	Solution45 sln;
	vector<int> nums{ 0 };
	int step{ sln.jump(nums) };
	printf("");
}

void test46()
{
	Solution46 sln;
	vector<int> nums{1, 2, 3, 4};
	vector<vector<int>> res{ sln.permute(nums) };
	printf("");
}

void test47()
{
	Solution47 sln;
	vector<int> nums{ 1,1,2,3 };
	vector<vector<int>> res{ sln.permuteUnique(nums) };
	printf("");
}

void test48()
{
	Solution48 sln;
	vector<vector<int>> matrix
	{
		{  1,   2,  3,   4,   5},
		{  6,   7,  8,   9, 10},
		{11, 12, 13, 14, 15},
		{16, 17, 18, 19, 20},
		{21, 22, 23, 24, 25},
	};
	sln.rotate(matrix);
	printf("");
}

void test49()
{
	Solution49 sln;
	vector<string> input{ "eat", "tea", "tan", "ate", "nat", "bat" };
	vector<vector<string>> res{ sln.groupAnagrams(input) };
	printf("");
}

void test50()
{
	Solution50 sln;
	double res{ sln.myPow(-2.0, -3) };
	printf("");
}

void test51()
{
	Solution51 sln;
	vector<vector<string>> res{ sln.solveNQueens(1) };
	for (auto vec : res)
	{
		for (auto str : vec)
		{
			printf("%s\n", str.c_str());
		}
		printf("\n");
	}
	printf("");
}

void test52()
{
	Solution52 sln;
	int count{ sln.totalNQueens(8) };
	printf("");
}

void test53()
{
	Solution53 sln;
	vector<int> array{ 8,-19,5,-4,20 };
	int max{ sln.maxSubArray(array) };
	printf("");
}

void test54()
{
	Solution54 sln;
	vector<vector<int>> input
	{
		{1},
		{2}
	};
	vector<int> res{ sln.spiralOrder(input) };
	for (auto it : res)
	{
		printf("%d ", it);
	}
	printf("\n");
}

void test55()
{
	Solution55 sln;
	vector<int> nums{ 0 };
	bool bRes{ sln.canJump(nums) };
	printf("");
}

void test56()
{
	Solution56 sln;
	vector<vector<int>> intervals
	{
		{1, 4},
		{4, 5}
	};
	vector<vector<int>> res{ sln.merge(intervals) };
	printf("");
}

void test57()
{
	Solution57 sln;
	vector<vector<int>> intervals
	{
		{1, 5}
	};
	vector<int> newInterval{0, 3};
	vector<vector<int>> res{ sln.insert(intervals, newInterval) };
	printf("");
}

void test58()
{
	Solution58 sln;
	string str{ "Hello World   " };
	int res{ sln.lengthOfLastWord(str) };
	printf("");
}

void test59()
{
	Solution59 sln;
	vector<vector<int>> res{ sln.generateMatrix(4) };
	printf("");
}

void test60()
{
	Solution60 sln;
	string res{ sln.getPermutationEx(1, 1) };
	printf("");
}

void test61()
{
	Solution61 sln;
	ListNode *head = new ListNode(1);
	ListNode *p{ head };
	for (int i = 2; i <= 5; i++)
	{
		ListNode *node = new ListNode(i);
		p->next = node;
		p = node;
	}
	ListNode *res{ sln.rotateRight(head, 2) };
	printf("");
}

void test62()
{
	Solution62 sln;
	int res{ sln.uniquePathsEx(10, 10) };
	printf("");
}

void test63()
{
	Solution63 sln;
	vector<vector<int>> obstacleGrid
	{
		{0,0,0,0,0,0,0,0,1,0,1,0,0,0,0,0,0,0,0,1,0,0,0,0,0,1,0,0,0,0,0,0,0},
		{0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
		{0,0,0,0,0,1,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,1,0,0,0,0,0,0},
		{1,1,1,0,0,0,0,1,0,0,0,0,0,0,0,0,1,0,0,1,1,0,0,0,0,0,0,0,0,1,0,0,1},
		{0,0,1,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,1,0,0,0,0,0},
		{0,0,0,1,0,1,0,0,0,0,1,1,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,1,1,0},
		{1,0,1,1,1,0,0,0,0,1,0,0,0,0,0,0,0,0,1,0,0,0,0,0,1,0,0,0,0,0,0,0,0},
		{0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,1,0,1,0,0,0,1,0,1,0,0,0,0,0,0},
		{0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,0,0,1,0},
		{0,0,0,0,0,0,0,0,0,1,1,0,0,0,0,0,0,0,0,0,0,0,1,1,0,0,0,1,0,0,0,0,0},
		{0,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0},
		{1,0,1,0,0,0,0,0,0,0,0,1,0,0,1,0,0,0,0,1,0,1,0,0,0,1,0,1,0,0,0,0,1},
		{0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,1,0,1,0,0,0,0,0,0,1,1,0,0,0,0,0},
		{0,1,0,1,0,0,0,0,1,0,0,1,0,0,0,0,0,0,0,1,1,0,0,0,0,0,0,1,0,0,0,0,0},
		{0,1,0,0,0,0,0,0,1,0,0,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,1,1,0,1},
		{1,0,0,0,0,1,0,0,1,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
		{0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,1,0,0,0,0,1,1,0,0,1,0,0,0,0,0,0},
		{0,0,1,0,0,0,0,0,0,0,1,0,0,1,0,0,1,0,0,0,0,0,0,1,1,0,1,0,0,0,0,1,1},
		{0,1,0,0,1,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,1,0,1,1,0,1,0,1},
		{1,1,1,0,1,0,0,0,0,1,0,0,0,0,0,0,1,0,1,0,1,1,0,0,0,0,0,0,0,0,0,0,0},
		{0,0,0,0,1,1,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,1,0,0,0,0,0,0,0,0,0,1,1},
		{0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,1,0,1,0,0,0,1,0,0,0}
	};
	int steps{ sln.uniquePathsWithObstacles(obstacleGrid) };
	printf("");
}

void test64()
{
	Solution64 sln;
	vector<vector<int>> gird
	{
		{1, 3, 1},
		{1, 1, 1},
		{4, 5, 1}
	};
	int res{ sln.minPathSum(gird) };
	printf("");
}

void test65()
{
	Solution65 sln;
	bool res{ sln.isNumber("+.8") };
	printf("");
}

void test66()
{
	Solution66 sln;
	vector<int> digits{ 9, 9 };
	vector<int> res{ sln.plusOne(digits) };
	printf("");
}

void test67()
{
	Solution67 sln;
	string a{"110"};
	string b{"10"};
	string res{ sln.addBinary(a, b) };
	printf("");
}

void test68()
{
	Solution68 sln;
	vector<string> words{ "This", "is", "an", "example", "of", "text", "justification." };
	vector<string> res{ sln.fullJustify(words, 16) };
	printf("");
}

void test69()
{
	Solution69 sln;
	int res{ sln.mySqrt(8) };
	printf("");
}

void test70()
{
	Solution70 sln;
	int res{ sln.climbStairs(10) };
	printf("");
}

void test71()
{
	Solution71 sln;
	string res{ sln.simplifyPath("/home//foo/") };
	printf("");
}

void test72()
{
	Solution72 sln;
	string str1{ "horse" };
	string str2{ "ros" };
	int count{ sln.minDistance(str1, str2) };
	printf("");
}

void test73()
{
	Solution73 sln;
	vector<vector<int>> matrix
	{
		{1},
		{0},
		{1}
	};
	sln.setZeroes(matrix);
	printf("");
}

void test74()
{
	Solution74 sln;
	vector<vector<int>> matrix = 
	{
		{1, 3, 5, 7},
		{10, 11, 16, 20},
		{23, 30, 34, 50}
	};
	bool res{ sln.searchMatrix(matrix, 3) };
	printf("");
}

void test75()
{
	Solution75 sln;
	vector<int> nums{ 2, 0, 2, 1, 1, 0 };
	sln.sortColors(nums);
	printf("");
}

void test76()
{
	Solution76 sln;
	string s{ "ADOBECODEBANC" };
	string t{ "ABC" };
	string window{ sln.minWindow(s, t) };
	printf("");
}

void test77()
{
	Solution77 sln;
	vector<vector<int>> res{ sln.combine(4, 2) };
	printf("");
}

void test78()
{
	Solution78 sln;
	vector<int> nums{ 1, 2, 3 };
	vector<vector<int>> res{ sln.subsets(nums) };
	printf("");
}

void test82()
{
	Solution82 sln;
	ListNode *head{ new ListNode(1) };
	vector<int> elems{ 1, 1, 1, 2, 3, 5 };
	ListNode *p{ head };
	for (auto elem : elems)
	{
		p->next = new ListNode(elem);
		p = p->next;
	}
	ListNode *res{ sln.deleteDuplicates(head) };
	printf("");
}

void test84()
{
	Solution84 sln;
	vector<int> heights{ 2,1,2 };
	int res{ sln.largestRectangleArea(heights) };
	printf("");
}

void test85()
{
	Solution85 sln;
	vector<vector<char>> matrix
	{
		{'1', '0', '1', '0', '0'},
		{'1', '0', '1', '1', '1'},
		{'1', '1', '1', '1', '1'},
		{'1', '0', '0', '1', '0'},
	};
	int res{ sln.maximalRectangle(matrix) };
	printf("");
}

void test87()
{
	Solution87 sln;
	string s1{ "abcdefghijklmnopq" };
	string s2{ "efghijklmnopqcadb" };
	bool res{ sln.isScramble(s1, s2) };
	printf("");
}

void test89()
{
	Solution89 sln;
	vector<int> res{ sln.grayCode(3) };
	printf("");
}

void test90()
{
	Solution90 sln;
	vector<int> input{ 1, 1 };
	vector<vector<int>> res{ sln.subsetsWithDup(input) };
	printf("");
}

void test93()
{
	Solution93 sln;
	string str{ "1111" };
	vector<string> res{ sln.restoreIpAddresses(str) };
	printf("");
}

void test94()
{
	Solution94 sln;
	TreeNode *p(new TreeNode(1));
	p->left = new TreeNode(2);
	p->right = new TreeNode(3);
	vector<int> res{ sln.inorderTraversal(p) };
	printf("");
}

void test95()
{
	Solution95 sln;
	vector<TreeNode *> res{ sln.generateTrees(3) };
	printf("");
}

void test96()
{
	Solution96 sln;
	int res{ sln.numTrees(3) };
	printf("");
}

void test97()
{
	Solution97 sln;
	string str1{ "aabcc" };
	string str2{ "dbbca" };
	string str3{ "aadbbcbcac" };
	bool res{ sln.isInterleave(str1, str2, str3) };
	printf("");
}

void test99()
{
	Solution99 sln;
	TreeNode *root{ NULL };
	vector<int> vec{ 1, 3, NULL, NULL, 2 };
	vector<TreeNode *> vecTree{};
	for (int i = 0; i < vec.size(); i++)
	{
		if (i == 0)
		{
			root = new TreeNode(vec[i]);
			vecTree.emplace_back(root);
		}
		else
		{
			TreeNode* node{ NULL };
			if (vec[i] != NULL)
				node = new TreeNode(vec[i]);
			int parent{ (i - 1) / 2 };
			bool isLeft{ (i - 1) % 2 == 0 };
			if (isLeft)
				vecTree[parent]->left = node;
			else
				vecTree[parent]->right = node;
			vecTree.emplace_back(node);
		}
	}
	sln.recoverTree(root);
	printf("");
}

void test100()
{
	Solution100 sln;
	TreeNode *p(new TreeNode(1));
	TreeNode *q(new TreeNode(1));
	p->left = new TreeNode(2);
	//p->right = new TreeNode(3);

	//q->left = new TreeNode(2);
	q->right = new TreeNode(2);

	bool bRes{ sln.isSameTree(p, q) };
	printf("");
}

void test115()
{
	Solution115 sln;
	//"daacaedaceacabbaabdccdaaeaebacddadcaeaacadbceaecddecdeedcebcdacdaebccdeebcbdeaccabcecbeeaadbccbaeccbbdaeadecabbbedceaddcdeabbcdaeadcddedddcececbeeabcbecaeadddeddccbdbcdcbceabcacddbbcedebbcaccac"
	//"ceadbaa"
	string str1{ "daacaedaceacabbaabdccdaaeaebacddadcaeaacadbceaecddecdeedcebcdacdaebccdeebcbdeaccabcecbeeaadbccbaeccbbdaeadecabbbedceaddcdeabbcdaeadcddedddcececbeeabcbecaeadddeddccbdbcdcbceabcacddbbcedebbcaccac" };
	string str2{ "ceadbaa" };
	//string str1{ "rabbbit" };
	//string str2{ "rabbit" };
	int count{ sln.numDistinct(str1, str2) };
	printf("");
}

void test123()
{
	Solution123 sln;
	vector<int> input{ 3,2,6,5,0,3 };
	int max{ sln.maxProfit(input) };
	printf("");
}

void test125()
{
	Solution125 sln;
	string str{ "race a car" };
	bool ret{ sln.isPalindrome(str) };
	printf("");
}

void test146()
{
	Solution146 sln;
	int nGet{ 0 };
	sln.init(2);
	sln.put(1, 1);
	sln.put(2, 2);
	printf("%d\n", sln.get(1));
	sln.put(3, 3);
	printf("%d\n", sln.get(2));
	printf("%d\n", sln.get(3));
	sln.put(4, 4);
	printf("%d\n", sln.get(1));
	printf("%d\n", sln.get(3));
	printf("%d\n", sln.get(4));
	printf("");
}

void test367()
{
	Solution367 sln;
	bool res{ sln.isPerfectSquare(4) };
	printf("");
}

void test416()
{
	Solution416 sln;
	vector<int> vec{ 1, 5, 3, 1 };
	bool res{ sln.canPartition(vec) };
	printf("");
}

void test460()
{
	Solution460 sln;
	vector<string> commands
	{
		"LFUCache","put","get","put","get","get","get","put","get","put","put","put","put","put","put","get","put","put","get","put","put","put","put","put","put","put","get","put","put","put","put","put","put","get","put","put","get","put","get","put","get","put","put","get","put","put","put","get","get","put","put","get","put","get","get","get","get","put","get","put","put","put","get","put","put","get","get","get","put","put","put","put","get","get","get","get","put","get","put","get","put","put","get","get","get","get","get","get","put","put","get","get","put","get","put","put","get","get","put","put","put","put","put","get","put","get","get","put","get","put","put","put","put","get","put","put","put","put","get","get","get","get","put","put","get","get","put","put","put","put","put","put","put","get","put","put","get","get","put","put","put","put","put","put","put","put","put","put","put","get","put","get","get","get","put","put","put","put","put","get","put","put","get","put","put","get","put","get","put","get","put","get","get","get","get","put","get","get","get","put","put","put","get","get","get","put","put","put","put","get","get","get","put","get","get","get","get","put","get","put","put","get","get","put","put","get","get","put","put","put","get","put","get","get","put","put","put","get","put","get","put","get","put","get","put","get","put","put","get","put","put","get","put","get","get","put","get","get","get","put","get","put","put","put","put","get","get","put","get","put","get","put","get","put","get","get","get","get","get","put","put","get","put","get","put","put","get","get","put","get","get","put","get","put","put","get","put","put","get","get","put","put","get","get","put","get","put","put","get","put","put","put","get","put","put","get","get","get","get","put","put","get","get","put","put","get","put","put","put","put","get","put","get","put","get","get","put","get","put","put","get","get","put","get","put","put","get","put","get","put","put","put","put","get","get","get","put","put","put","put","get","get","put","put","get","put","put","get","put","put","get","put","put","put","put","put","get","get","put","put","put","get","put","get","get","put","put","get","put","put","put","put","put","get","put","get","get","put","get","put","put","get","get","put","put","put","put","put","put","get","put","get","get","get","get","put","get","put","put","get","put","get","put","put","get","put","put","put","put","put","put","put","put","put","put","put","get","put","get","put","get","put","put","put","get","put","get","get","put","get","get","put","get","put","put","get","get","get","get","get","put","put","put","get","put","get","put","get","get","get","put","get","put","put","put","get","get","get","get","put","put","put","put","put","put","get","get","put","put","get","put","put","get","put","get","get","get","get","put","get","get","get","put","get","get","put","put","get","put","put","put","put","get","put","put","get","put","put","put","put","put","get","put","put","put","put","put","put","put","get","put","put","put","put","put","put","get","get","put","get","get","get","get","get","put","put","put","put","put","put","put","get","put","put","get","put","get","put","put","get","put","put","get","put","put","get","get","get","get","put","put","put","get","get","put","get","put","put","put","put","get","put","put","get","get","put","put","put","put","put","put","put","put","put","get","get","put","put","get","put","put","put","put","get","put","get","get","put","get","put","get","put","put","put","put","get","put","put","get","put","put","get","put","put","get","get","put","put","get","put","put","put","put","get","get","get","put","put","get","put","get","put","put","put","put","get","put","put","put","put","get","get","put","put","get","get","put","put","put","put","get","put","put","put","get","get","get","put","put","put","put","get","put","get","get","put","put","put","put","put","get","get","put","put","put","get","put","put","put","put","get","put","put","get","get","put","put","get","get","put","put","get","put","put","put","put","get","get","get","get","put","get","get","put","put","put","get","get","put","put","get","get","get","put","get","get","get","put","get","get","get","put","put","put","put","get","put","put","put","get","get","put","get","put","put","get","get","put","get","get","get","get","put","put","put","put","put","put","put","put","get","get","put","put","put","get","put","get","get","get","put","put","get","put","put","put","put","put","put","get","put","put","put","put","get","put","put","get","put","get","put","get","put","get","put","get","put","put","put","get","put","get","get","get","get","get","put","put","put","get","put","put","put","get","get","put","put","put","put","get","put","put","put","put","put","put","get","get","put","put","put","put","put","put","get","put","put","put","get","get","put","put","put","put","put","put","put","put","put","get","put","put","get","get","get","get","put","put","get","put","get","get","get","put","put","put","put","put","put","put","get","get","put","put","put","put","put","get","get","put","put","get","put","get","put","put","put","get","put","get","put","get","get","put","get","get","get","put","put","put","put","get","put","get","put","put","put","put","put","put","get","put","put","get","put","put","get","put","put","put","put","get","put","put","get","get","put","put","put","put","get","put","get","put","put","put","put","put","put","put","put","put","get","put","put","put","put","get","get","get","put","get","get","put","put","put","put","get","put","get","get","get","put","get","get","put","get","put","get","put","put","get","put","get","get","get","get","put","put","get","put","get","get","get","get","put","put","put","get","put","get","put","get","put","get","get","put","get","get","put","put","put","put","get","get","put","put","put","get","put","get","put","put","get","put","get","put","get","put","get","get","put","get","get","put","put","put","get","put","put","get","get","put","get","put","get","put","put","get","get"
	};
	vector<vector<int>> values
	{
		{105},{33,219},{39},{96,56},{129},{115},{112},{3,280},{40},{85,193},{10,10},{100,136},{12,66},{81,261},{33,58},{3},{121,308},{129,263},{105},{104,38},{65,85},{3,141},{29,30},{80,191},{52,191},{8,300},{136},{48,261},{3,193},{133,193},{60,183},{128,148},{52,176},{48},{48,119},{10,241},{124},{130,127},{61},{124,27},{94},{29,304},{102,314},{110},{23,49},{134,12},{55,90},{14},{104},{77,165},{60,160},{117},{58,30},{54},{136},{128},{131},{48,114},{136},{46,51},{129,291},{96,207},{131},{89,153},{120,154},{111},{47},{5},{114,157},{57,82},{113,106},{74,208},{56},{59},{100},{132},{127,202},{75},{102,147},{37},{53,79},{119,220},{47},{101},{89},{20},{93},{7},{48,109},{71,146},{43},{122},{3,160},{17},{80,22},{80,272},{75},{117},{76,204},{74,141},{107,93},{34,280},{31,94},{132},{71,258},{61},{60},{69,272},{46},{42,264},{87,126},{107,236},{131,218},{79},{41,71},{94,111},{19,124},{52,70},{131},{103},{81},{126},{61,279},{37,100},{95},{54},{59,136},{101,219},{15,248},{37,91},{11,174},{99,65},{105,249},{85},{108,287},{96,4},{70},{24},{52,206},{59,306},{18,296},{79,95},{50,131},{3,161},{2,229},{39,183},{90,225},{75,23},{136,280},{119},{81,272},{106},{106},{70},{73,60},{19,250},{82,291},{117,53},{16,176},{40},{7,70},{135,212},{59},{81,201},{75,305},{101},{8,250},{38},{28,220},{21},{105,266},{105},{85},{55},{6},{78,83},{126},{102},{66},{61,42},{127,35},{117,105},{128},{102},{50},{24,133},{40,178},{78,157},{71,22},{25},{82},{129},{126,12},{45},{40},{86},{100},{30,110},{49},{47,185},{123,101},{102},{5},{40,267},{48,155},{108},{45},{14,182},{20,117},{43,124},{38},{77,158},{111},{39},{69,126},{113,199},{21,216},{11},{117,207},{30},{97,84},{109},{99,218},{109},{113,1},{62},{49,89},{53,311},{126},{32,153},{14,296},{22},{14,225},{49},{75},{61,241},{7},{6},{31},{75,15},{115},{84,181},{125,111},{105,94},{48,294},{106},{61},{53,190},{16},{12,252},{28},{111,122},{122},{10,21},{59},{72},{39},{6},{126},{131,177},{105,253},{26},{43,311},{79},{91,32},{7,141},{38},{13},{79,135},{43},{94},{80,182},{53},{120,309},{3,109},{97},{9,128},{114,121},{56},{56},{124,86},{34,145},{131},{78},{86,21},{98},{115,164},{47,225},{95},{89,55},{26,134},{8,15},{11},{84,276},{81,67},{46},{39},{92},{96},{89,51},{136,240},{45},{27},{24,209},{82,145},{10},{104,225},{120,203},{121,108},{11,47},{89},{80,66},{16},{95,101},{49},{1},{77,184},{27},{74,313},{14,118},{16},{74},{88,251},{124},{58,101},{42,81},{2},{133,101},{16},{1,254},{25,167},{53,56},{73,198},{48},{30},{95},{90,102},{92,56},{2,130},{52,11},{9},{23},{53,275},{23,258},{57},{136,183},{75,265},{85},{68,274},{15,255},{85},{33,314},{101,223},{39,248},{18,261},{37,160},{112},{65},{31,240},{40,295},{99,231},{123},{34,43},{87},{80},{47,279},{89,299},{72},{26,277},{92,13},{46,92},{67,163},{85,184},{38},{35,65},{70},{81},{40,65},{80},{80,23},{76,258},{69},{133},{123,196},{119,212},{13,150},{22,52},{20,105},{61,233},{97},{128,307},{85},{80},{73},{30},{46,44},{95},{121,211},{48,307},{2},{27,166},{50},{75,41},{101,105},{2},{110,121},{32,88},{75,84},{30,165},{41,142},{128,102},{105,90},{86,68},{13,292},{83,63},{5,239},{5},{68,204},{127},{42,137},{93},{90,258},{40,275},{7,96},{108},{104,91},{63},{31},{31,89},{74},{81},{126,148},{107},{13,28},{21,139},{114},{5},{89},{133},{20},{96,135},{86,100},{83,75},{14},{26,195},{37},{1,287},{79},{15},{6},{68,11},{52},{124,80},{123,277},{99,281},{133},{90},{45},{127},{9,68},{123,6},{124,251},{130,191},{23,174},{69,295},{32},{37},{1,64},{48,116},{68},{117,173},{16,89},{84},{28,234},{129},{89},{55},{83},{99,264},{129},{84},{14},{26,274},{109},{110},{96,120},{128,207},{12},{99,233},{20,305},{26,24},{102,32},{82},{16,30},{5,244},{130},{109,36},{134,162},{13,165},{45,235},{112,80},{6},{34,98},{64,250},{18,237},{72,21},{42,105},{57,108},{28,229},{83},{1,34},{93,151},{132,94},{18,24},{57,68},{42,137},{35},{80},{10,288},{21},{115},{131},{30},{43},{97,262},{55,146},{81,112},{2,212},{5,312},{82,107},{14,151},{77},{60,42},{90,309},{90},{131,220},{86},{106,85},{85,254},{14},{66,262},{88,243},{3},{50,301},{118,91},{25},{105},{100},{89},{111,152},{65,24},{41,264},{117},{117},{80,45},{38},{11,151},{126,203},{128,59},{6,129},{91},{118,2},{50,164},{74},{80},{48,308},{109,82},{3,48},{123,10},{59,249},{128,64},{41,287},{52,278},{98,151},{12},{25},{18,254},{24,40},{119},{66,44},{61,19},{80,132},{62,111},{80},{57,188},{132},{42},{18,314},{48},{86,138},{8},{27,88},{96,178},{17,104},{112,86},{25},{129,119},{93,44},{115},{33,36},{85,190},{10},{52,182},{76,182},{109},{118},{82,301},{26,158},{71},{108,309},{58,132},{13,299},{117,183},{115},{89},{42},{11,285},{30,144},{69},{31,53},{21},{96,162},{4,227},{77,120},{128,136},{92},{119,208},{87,61},{9,40},{48,273},{95},{35},{62,267},{88,161},{59},{85},{131,53},{114,98},{90,257},{108,46},{54},{128,223},{114,168},{89,203},{100},{116},{14},{61,104},{44,161},{60,132},{21,310},{89},{109,237},{105},{32},{78,101},{14,71},{100,47},{102,33},{44,29},{85},{37},{68,175},{116,182},{42,47},{9},{64,37},{23,32},{11,124},{130,189},{65},{33,219},{79,253},{80},{16},{38,18},{35,67},{107},{88},{37,13},{71,188},{35},{58,268},{18,260},{73,23},{28,102},{129},{88},{65},{80},{119,146},{113},{62},{123,138},{18,1},{26,208},{107},{107},{76,132},{121,191},{4},{8},{117},{11,118},{43},{69},{136},{66,298},{25},{71},{100},{26,141},{53,256},{111,205},{126,106},{43},{14,39},{44,41},{23,230},{131},{53},{104,268},{30},{108,48},{72,45},{58},{46},{128,301},{71},{99},{113},{121},{130,122},{102,5},{111,51},{85,229},{86,157},{82,283},{88,52},{136,105},{40},{63},{114,244},{29,82},{83,278},{131},{56,33},{123},{11},{119},{119,1},{48,52},{47},{127,136},{78,38},{117,64},{130,134},{93,69},{70,98},{68},{4,3},{92,173},{114,65},{7,309},{31},{107,271},{110,69},{45},{35,288},{20},{38,79},{46},{6,123},{19},{84,95},{76},{71,31},{72,171},{35,123},{32},{73,85},{94},{128},{28},{38},{109},{85,197},{10,41},{71,50},{128},{3,55},{15,9},{127,215},{17},{37},{111,272},{79,169},{86,206},{40,264},{134},{16,207},{27,127},{29,48},{32,122},{15,35},{117,36},{127},{36},{72,70},{49,201},{89,215},{134,290},{77,64},{26,101},{99},{36,96},{84,129},{125,264},{43},{38},{24,76},{45,2},{32,24},{84,235},{16,240},{17,289},{49,94},{90,54},{88,199},{23},{87,19},{11,19},{24},{57},{4},{40},{133,286},{127,231},{51},{52,196},{27},{10},{93},{115,143},{62,64},{59,200},{75,85},{7,93},{117,270},{116,6},{32},{135},{2,140},{23,1},{11,69},{89,30},{27,14},{100},{61},{99,41},{88,12},{41},{52,203},{65},{62,78},{104,276},{105,307},{7},{23,123},{22},{35,299},{69},{11},{14,112},{115},{112},{108},{110,165},{83,165},{36,260},{54,73},{36},{93,69},{134},{125,96},{74,127},{110,305},{92,309},{87,45},{31,266},{10},{114,206},{49,141},{82},{92,3},{91,160},{41},{60,147},{36,239},{23,296},{134,120},{6},{5,283},{117,68},{35},{120},{44,191},{121,14},{118,113},{84,106},{23},{15,240},{37},{52,256},{119,116},{101,7},{14,157},{29,225},{4,247},{8,112},{8,189},{96,220},{104},{72,106},{23,170},{67,209},{70,39},{18},{6},{34},{121,157},{16},{19},{83,283},{13,22},{33,143},{88,133},{88},{5,49},{38},{110},{67},{23,227},{68},{3},{27,265},{31},{13,103},{116},{111,282},{43,71},{134},{70,141},{14},{119},{43},{122},{38,187},{8,9},{63},{42,140},{83},{92},{106},{28},{57,139},{36,257},{30,204},{72},{105,243},{16},{74,25},{22},{118,144},{133},{71},{99,21},{26},{35},{89,209},{106,158},{76,63},{112,216},{128},{54},{16,165},{76,206},{69,253},{23},{54,111},{80},{111,72},{95,217},{118},{4,146},{47},{108,290},{43},{70,8},{117},{121},{42,220},{48},{32},{68,213},{30,157},{62,68},{58},{125,283},{132,45},{85},{92},{23,257},{74},{18,256},{90},{10,158},{57,34},{27},{107}
	};
	sln.operation(commands, values);
	printf("");
}

void test633()
{
	Solution633 sln;
	bool res{ sln.judgeSquareSum(9) };
	printf("");
}

void test5169()
{
	Solution5169 sln;
	string date1{ "1971-06-29" };
	string date2{ "2010-09-23" };
	int days{ sln.daysBetweenDates(date1, date2) };
	printf("");
}

void test5315()
{
	Solution5315 sln;
	int res{ sln.maximum69Number(9669) };
	printf("");
}

void test5316()
{
	Solution5316 sln;
	vector<string> res{ sln.printVertically("CONTEST IS COMING") };
	printf("");
}

void test5317()
{
	Solution5317 sln;
	TreeNode *root = new TreeNode(1);
	root->left = new TreeNode(1);
	root->right = new TreeNode(1);
	TreeNode *res{ sln.removeLeafNodes(root, 1) };
	printf("");
}

void test5318()
{
	Solution5318 sln;
	int n{ 7 };
	vector<int> ranges{ 1, 2, 1, 0, 2, 1, 0, 1 };
	int res{ sln.minTaps(n, ranges) };
	printf("");
}

int _tmain(int argc, _TCHAR* argv[])
{
	test125();
	return 0;
}