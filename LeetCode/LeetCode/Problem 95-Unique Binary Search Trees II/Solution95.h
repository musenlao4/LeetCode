#pragma once

class Solution95
{
public:
	Solution95();
	~Solution95();
public:
	vector<TreeNode*> generateTrees(int n);
private:
	void generateOneTree(int index);
	void copyTree(TreeNode *src, TreeNode **dst);
	void deleteTree(TreeNode *node);
private:
	vector<TreeNode*> res;
};
