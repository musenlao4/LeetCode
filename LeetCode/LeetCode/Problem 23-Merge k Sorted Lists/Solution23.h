#pragma once

namespace MySolution23
{
	struct ListNode {
		int val;
		ListNode *next;
		ListNode(int x) : val(x), next(NULL) {}
	};
}

class Solution23
{
public:
	Solution23();
	~Solution23();

public:
	MySolution23::ListNode* mergeKLists(vector<MySolution23::ListNode*>& lists);
};
