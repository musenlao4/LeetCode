#include "stdafx.h"
#include "Solution100.h"

Solution100::Solution100()
{
}


Solution100::~Solution100()
{
}

bool Solution100::isSameTree(TreeNode * p, TreeNode * q)
{
	if (p == NULL && q == NULL)
	{
		return true;
	}
	else if (p != NULL && q != NULL)
	{
		if (p->val == q->val)
		{
			return isSameTree(p->left, q->left) && isSameTree(p->right, q->right);
		}
		else
		{
			return false;
		}
	}
	return false;
}
