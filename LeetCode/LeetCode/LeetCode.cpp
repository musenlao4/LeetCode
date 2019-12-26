// LeetCode.cpp : ¶¨Òå¿ØÖÆÌ¨Ó¦ÓÃ³ÌĞòµÄÈë¿Úµã¡£
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

void test100()
{
	Solution100 sln;
	Solution100::TreeNode *p(new Solution100::TreeNode(1));
	Solution100::TreeNode *q(new Solution100::TreeNode(1));
	p->left = new Solution100::TreeNode(2);
	//p->right = new Solution100::TreeNode(3);

	//q->left = new Solution100::TreeNode(2);
	q->right = new Solution100::TreeNode(2);

	bool bRes{ sln.isSameTree(p, q) };
	printf("");
}

int _tmain(int argc, _TCHAR* argv[])
{
	test100();
	return 0;
}