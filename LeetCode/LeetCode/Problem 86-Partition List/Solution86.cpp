#include "stdafx.h"
#include "Solution86.h"

Solution86::Solution86()
{
}


Solution86::~Solution86()
{
}

ListNode * Solution86::partition(ListNode * head, int x)
{
	ListNode *last{ NULL };
	ListNode *p{ head };
	if (p == NULL || p->next == NULL)
		return head;
	if (p->val < x)
		last = p;
	while (p != NULL && p->next != NULL)
	{
		if (p->next->val >= x)
			p = p->next;
		else if (last == NULL)
		{
			ListNode *temp = p->next;
			p->next = temp->next;
			temp->next = head;
			head = temp;
			last = temp;
		}
		else if (last == p)
		{
			p = p->next;
			last = p;
		}
		else
		{
			ListNode *temp = p->next;
			p->next = temp->next;
			temp->next = last->next;
			last->next = temp;
			last = temp;
		}
	}
	return head;
}
