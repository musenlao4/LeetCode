#include "stdafx.h"
#include "Solution98.h"

Solution98::Solution98()
{
}


Solution98::~Solution98()
{
}

bool isValidNode(TreeNode *node, TreeNode *lastLeft, TreeNode *lastRight)
{
	bool left{ false };
	bool right{ false };
	if (node->left == NULL)
		left = true;
	else
		left = node->left->val < node->val 
			&& ( lastLeft == NULL || node->left->val > lastLeft->val )
			&& isValidNode(node->left, lastLeft, node);
	if (!left)
		return false;
	if (node->right == NULL)
		right = true;
	else
		right = node->right->val > node->val
			&& ( lastRight == NULL || node->right->val < lastRight->val )
			&& isValidNode(node->right, node, lastRight);
	return right;
}

bool Solution98::isValidBST(TreeNode * root)
{
	if (root == NULL)
		return true;
	return isValidNode(root, NULL, NULL);
}
