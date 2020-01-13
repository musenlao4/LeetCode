#include "stdafx.h"
#include "Solution83.h"

Solution83::Solution83()
{
}


Solution83::~Solution83()
{
}

ListNode * Solution83::deleteDuplicates(ListNode * head)
{
	ListNode *p{ head };
	while (p != NULL && p->next != NULL)
	{
		if (p->val == p->next->val)
		{
			ListNode* temp{ p->next };
			p->next = p->next->next;
			delete temp;
		}
		else
			p = p->next;
	}
	return head;
}
