#include "stdafx.h"
#include "Solution99.h"

Solution99::Solution99()
{
}


Solution99::~Solution99()
{
}

vector<TreeNode *> vecTree{};
void swapNode()
{
	if (vecTree.size() < 2)
		return;
	for (int i = vecTree.size() - 2; i >= 0; --i)
	{
		if (vecTree[i + 1]->val < vecTree[i]->val)
		{
			int temp = vecTree[i + 1]->val;
			vecTree[i + 1]->val = vecTree[i]->val;
			vecTree[i]->val = temp;
		}
	}
}

void Solution99::recoverTree(TreeNode * root)
{
	if (root == NULL)
		return;
	recoverTree(root->left);
	vecTree.emplace_back(root);
	swapNode();
	recoverTree(root->right);
}
