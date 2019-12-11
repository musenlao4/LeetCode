#include "stdafx.h"
#include "Solution25.h"

Solution25::Solution25()
{
}


Solution25::~Solution25()
{
}

ListNode * Solution25::reverseKGroup(ListNode * head, int k)
{
	ListNode *pStar{ head };
	ListNode *pPrev{ NULL };
	while (pStar != NULL)
	{
		std::vector<ListNode *> vec{};
		ListNode *pPos{ pStar };
		int count{ 0 };
		do
		{
			vec.emplace_back(pPos);
			pPos = pPos->next;
			++count;
		} while (count < k && pPos != NULL);
		if (vec.size() < k)
		{
			break;
		}

		ListNode* pEndNext{ vec.back()->next };
		for (int i = k - 1; i >= 0 ; --i)
		{
			if (pPrev == NULL)
			{
				pPrev = vec.at(i);
				head = vec.at(i);
			}
			else
			{
				pPrev->next = vec.at(i);
				pPrev = vec.at(i);
			}
		}
		pPrev->next = pEndNext;
		pStar = pEndNext;
	}
	return head;
}
