#include "stdafx.h"
#include "Solution95.h"

Solution95::Solution95()
{
}


Solution95::~Solution95()
{
}

vector<TreeNode*> Solution95::generateTrees(int n)
{
	if (n < 1)
	{
		return res;
	}
	res.emplace_back(new TreeNode(1));
	for (int i = 2; i <= n; ++i)
	{
		generateOneTree(i);
	}
	return res;
}

void Solution95::generateOneTree(int index)
{
	vector<TreeNode *> next{};
	for (auto lastTree : res)
	{
		int step{ 0 };
		TreeNode *p = lastTree;
		TreeNode *pParent = NULL;
		while (p != NULL)
		{
			TreeNode *dst = NULL;
			copyTree(lastTree, &dst);
			TreeNode *q = dst;
			for (int i = 0; i < step; ++i)
			{
				pParent = q;
				q = q->right;
			}
			TreeNode *insertNode{ new TreeNode(index) };
			if (pParent == NULL)
			{
				insertNode->left = dst;
				dst = insertNode;
			}
			else
			{
				insertNode->left = q;
				pParent->right = insertNode;
			}
			next.emplace_back(dst);

			if (p->right == NULL)
			{
				TreeNode *rightNode{ new TreeNode(index) };
				p->right = rightNode;
				next.emplace_back(lastTree);
				break;
			}
			else
			{
				p = p->right;
				++step;
			}
		}
	}
	res.clear();
	res.assign(next.begin(), next.end());
}

void Solution95::copyTree(TreeNode * src, TreeNode ** dst)
{
	if (src == NULL)
	{
		return;
	}
	*dst = new TreeNode(src->val);
	copyTree(src->left, &((*dst)->left));
	copyTree(src->right, &((*dst)->right));
}

void Solution95::deleteTree(TreeNode * node)
{
	if (node == NULL)
	{
		return;
	}
	TreeNode *left = node->left;
	TreeNode *right = node->right;
	deleteTree(left);
	deleteTree(right);
	delete node;
}

