#include "stdafx.h"
#include "Solution61.h"

Solution61::Solution61()
{
}


Solution61::~Solution61()
{
}

ListNode * Solution61::rotateRight(ListNode * head, int k)
{
	ListNode *p{ head };
	ListNode *end{ p };
	int length{ 0 };
	while (p != NULL)
	{
		if (p->next == NULL)
		{
			end = p;
		}
		++length;
		p = p->next;
	}
	if (length == 0)
	{
		return head;
	}
	int rotateCount{ k % length };
	if (rotateCount == 0)
	{
		return head;
	}
	for (int i = 0; i < length - rotateCount; ++i)
	{
		ListNode *node = head;
		end->next = head;
		end = head;
		head = head->next;
		end->next = NULL;
	}
	return head;
}
