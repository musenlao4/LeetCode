#pragma once
namespace MySolution25
{
	struct ListNode {
		int val;
		ListNode *next;
		ListNode(int x) : val(x), next(NULL) {}
	};
}
class Solution25
{
public:
	Solution25();
	~Solution25();

public:
	MySolution25::ListNode* reverseKGroup(MySolution25::ListNode* head, int k);
};
