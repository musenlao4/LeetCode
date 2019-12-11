#include "stdafx.h"
#include "Solution19.h"

Solution19::Solution19()
{
}


Solution19::~Solution19()
{
}

ListNode * Solution19::removeNthFromEnd(ListNode * head, int n)
{
	ListNode *p = head;
	ListNode *pprev = head;
	int pos = 0;
	int pos_prev = 0;
	while (p->next != NULL)
	{
		p = p->next;
		++pos;
		if (pos - pos_prev > n)
		{
			pprev = pprev->next;
			++pos_prev;
		}
	}
	if (pos + 1 < n)
	{
		return NULL;
	}
	else if (pos + 1 == n)
	{
		ListNode *pRes = head->next;
		delete(head);
		return pRes;
	}
	else
	{
		ListNode *temp = pprev->next;
		pprev->next = temp->next;
		delete(temp);
		return head;
	}
}
