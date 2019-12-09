#pragma once

namespace MySolution19
{
	struct ListNode {
		int val;
		ListNode *next;
		ListNode(int x) : val(x), next(NULL) {}
	};
}

class Solution19
{
public:
	Solution19();
	~Solution19();

public:
	MySolution19::ListNode* removeNthFromEnd(MySolution19::ListNode* head, int n);
};
