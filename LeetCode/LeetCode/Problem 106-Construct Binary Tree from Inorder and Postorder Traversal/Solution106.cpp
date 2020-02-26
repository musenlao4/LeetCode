#include "stdafx.h"
#include "Solution106.h"

Solution106::Solution106()
{
}


Solution106::~Solution106()
{
}

TreeNode * buildNode(vector<int>& inorder, vector<int>& postorder, int& iPost, int iInBegin, int iInEnd)
{
	if (iPost < 0)
		return NULL;
	int val{ postorder[iPost] };
	int i{ iInBegin };
	for (; i <= iInEnd; ++i)
		if (val == inorder[i])
			break;
	TreeNode* node = new TreeNode(val);
	--iPost;
	if (i < iInEnd)
		node->right = buildNode(inorder, postorder, iPost, i + 1, iInEnd);
	if (i > iInBegin)
		node->left = buildNode(inorder, postorder, iPost, iInBegin, i - 1);
	return node;
}

TreeNode * Solution106::buildTree(vector<int>& inorder, vector<int>& postorder)
{
	if (postorder.empty())
		return NULL;
	int iPost{ static_cast<int>(postorder.size() - 1) };
	return buildNode(inorder, postorder, iPost, 0, inorder.size() - 1);
}
