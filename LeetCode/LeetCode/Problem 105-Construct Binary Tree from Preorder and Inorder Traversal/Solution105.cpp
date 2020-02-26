#include "stdafx.h"
#include "Solution105.h"

Solution105::Solution105()
{
}


Solution105::~Solution105()
{
}

int indexPre;
int indexIn;
TreeNode* buildNode(vector<int>& preorder, vector<int>& inorder, vector<int>&parent)
{
	if (indexPre >= static_cast<int>(preorder.size()))
		return NULL;
	int val{ preorder[indexPre] };
	TreeNode *node = new TreeNode(val);
	++indexPre;
	if (val == inorder[indexIn])
		++indexIn;
	else
	{
		parent.emplace_back(val);
		node->left = buildNode(preorder, inorder, parent);
		++indexIn;
		parent.pop_back();
	}
	if (parent.empty() || inorder[indexIn] != parent.back())
		node->right = buildNode(preorder, inorder, parent);
	return node;
}

TreeNode * Solution105::buildTree(vector<int>& preorder, vector<int>& inorder)
{
	vector<int> parent{};
	indexPre = 0;
	indexIn = 0;
	return buildNode(preorder, inorder, parent);
}
