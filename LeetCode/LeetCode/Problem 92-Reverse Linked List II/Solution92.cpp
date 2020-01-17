#include "stdafx.h"
#include "Solution92.h"

Solution92::Solution92()
{
}


Solution92::~Solution92()
{
}

ListNode * Solution92::reverseBetween(ListNode * head, int m, int n)
{
	ListNode* last{ NULL };
	ListNode* begin{ head };
	for (int i = 1; i < m; ++i)
	{
		last = begin;
		begin = begin->next;
	}
	ListNode* end{ begin };
	for (int i = 0; i < n - m; ++i)
		end = end->next;
	for (int i = 0; i < n - m; ++i)
	{
		ListNode* pTemp{ begin->next };
		begin->next = end->next;
		end->next = begin;
		if (last != NULL)
			last->next = pTemp;
		else
			head = pTemp;
		begin = pTemp;
	}
	return head;
}
