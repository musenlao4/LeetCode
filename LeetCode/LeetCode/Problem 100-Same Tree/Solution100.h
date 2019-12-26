#pragma once
class Solution100
{
public:
	struct TreeNode {
		int val;
		TreeNode *left;
		TreeNode *right;
		TreeNode(int x) : val(x), left(NULL), right(NULL) {}
	};
public:
	Solution100();
	~Solution100();

public:
	bool isSameTree(TreeNode* p, TreeNode* q);
};
