#include "stdafx.h"
#include "Solution23.h"

using namespace MySolution23;

Solution23::Solution23()
{
}


Solution23::~Solution23()
{
}

ListNode * Solution23::mergeKLists(vector<ListNode*>& lists)
{
	// find main list
	ListNode *pMain{ NULL };
	if (lists.empty())
	{
		return pMain;
	}
	for (auto l : lists)
	{
		if (l == NULL)
		{
			continue;
		}
		if (pMain == NULL)
		{
			pMain = l;
			continue;
		}
		if (pMain->val > l->val)
		{
			pMain = l;
		}
	}

	lists.erase(find(lists.begin(), lists.end(), pMain));
	ListNode *ppos = pMain;

	while (ppos != NULL)
	{
		ListNode *pMainNext{ ppos->next };
		ListNode **pInsertNode{ NULL };
		bool bAllNull = true;
		for (auto &l : lists)
		{
			if (l == NULL)
			{
				continue;
			}
			bAllNull = false;
			if (pInsertNode == NULL)
			{
				if (pMainNext == NULL || l->val < pMainNext->val)
				{
					pInsertNode = &l;
				}
			}
			else
			{
				if (l->val < (*pInsertNode)->val)
				{
					pInsertNode = &l;
				}
			}
		}
		if (bAllNull)
		{
			break;
		}
		if (pInsertNode == NULL)
		{
			ppos = ppos->next;
		}
		else
		{
			ListNode *ptemp = (*pInsertNode);
			(*pInsertNode) = (*pInsertNode)->next;

			ptemp->next = ppos->next;
			ppos->next = ptemp;
			ppos = ptemp;
		}
	}

	return pMain;
}
