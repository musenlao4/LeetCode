#include "stdafx.h"
#include "Solution94.h"

Solution94::Solution94()
{
}


Solution94::~Solution94()
{
}

vector<int> Solution94::inorderTraversal(TreeNode * root)
{
	vector<int> res{};
	vector<TreeNode *> stack{};
	TreeNode *p{ root };
	while (p != NULL)
	{
		if (p->left != NULL)
		{
			stack.push_back(p);
			p = p->left;
		}
		else
		{
			res.emplace_back(p->val);
			if (p->right != NULL)
			{
				p = p->right;
			}
			else
			{
				p = NULL;
				while (!stack.empty())
				{
					TreeNode *q{ stack.back() };
					stack.pop_back();
					res.emplace_back(q->val);
					if (q->right != NULL)
					{
						p = q->right;
						break;
					}
				}
			}
		}
	}
	return res;
}
