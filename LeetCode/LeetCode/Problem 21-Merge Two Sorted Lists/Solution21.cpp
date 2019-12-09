#include "stdafx.h"
#include "Solution21.h"

using namespace MySolution21;
Solution21::Solution21()
{
}


Solution21::~Solution21()
{
}

ListNode * Solution21::mergeTwoLists(ListNode * l1, ListNode * l2)
{
	if (l1 == NULL)
	{
		return l2;
	}
	if (l2 == NULL)
	{
		return l1;
	}

	ListNode *p1 = l1;
	ListNode *p2 = l2;
	if (l1->val > l2->val)
	{
		p1 = l2;
		p2 = l1;
	}
	ListNode *res = p1;
	while (p1->next != NULL)
	{
		if (p1->next->val > p2->val)
		{
			ListNode *ptemp{ p2 };
			p2 = p2->next;

			ptemp->next = p1->next;
			p1->next = ptemp;
			p1 = p1->next;
		}
		else
		{
			p1 = p1->next;
		}
		if (p2 == NULL)
		{
			break;
		}
	}
	if (p2 != NULL)
	{
		p1->next = p2;
	}
	return res;
}
