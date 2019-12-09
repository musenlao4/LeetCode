#pragma once

namespace MySolution21
{
	struct ListNode {
		int val;
		ListNode *next;
		ListNode(int x) : val(x), next(NULL) {}
	};
}

class Solution21
{
public:
	Solution21();
	~Solution21();
public:
	MySolution21::ListNode* mergeTwoLists(MySolution21::ListNode* l1, MySolution21::ListNode* l2);
};
