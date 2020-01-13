#include "stdafx.h"
#include "Solution82.h"

Solution82::Solution82()
{
}


Solution82::~Solution82()
{
}

ListNode * Solution82::deleteDuplicates(ListNode * head)
{
	ListNode *p{ head };
	ListNode *last{ head };
	int count{ 0 };
	while (p != NULL && last != NULL)
	{
		ListNode *next{ last->next };
		if (next != NULL && last->val == next->val)
		{
			++count;
			last = next;
		}
		else if (count == 0)
		{
			p = last;
			last = next;
		}
		else
		{
			if (p->val == last->val)
			{
				head = next;
				p = head;
				last = head;
			}
			else
			{
				p->next = next;
				last = next;
			}
			count = 0;
		}
	}
	return head;
}
