#pragma once

namespace MySolution24 {
	struct ListNode {
		int val;
		ListNode *next;
		ListNode(int x) : val(x), next(NULL) {}
	};
}

class Solution24
{
public:
	Solution24();
	~Solution24();

public:
	MySolution24::ListNode* swapPairs(MySolution24::ListNode* head);
};
