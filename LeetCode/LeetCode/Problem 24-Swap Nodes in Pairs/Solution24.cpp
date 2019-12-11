#include "stdafx.h"
#include "Solution24.h"

Solution24::Solution24()
{
}


Solution24::~Solution24()
{
}

ListNode * Solution24::swapPairs(ListNode * head)
{
	ListNode **p{ &head };
	ListNode *pPrev{ NULL };
	ListNode *pRes{ head };
	while (p != NULL && *p != NULL && (*p)->next != NULL)
	{
		ListNode *pNext{ (*p)->next };
		(*p)->next = pNext->next;
		pNext->next = (*p);

		// need Temp to save p and modify p first
		// or not pPrev->next will modify p
		ListNode *pTemp{ *p };
		p = &((*p)->next);

		if (pPrev != NULL)
		{
			pPrev->next = pNext;
		}
		else
		{
			pRes = pNext;
		}

		pPrev = pTemp;
		// if write like this, it will wrong.
		// p = &((*p)->next);
	}
	return pRes;
}
