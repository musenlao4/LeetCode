#include "stdafx.h"
#include "LFUCache.h"

LFUCache::LFUCache()
	: m_nCapacity{ 0 }
	, m_nSize{ 0 }
	, m_pHead{ NULL }
	, m_pEnd{ NULL }
{
}


LFUCache::~LFUCache()
{
	release();
}

LFUCache::LFUCache(int capacity)
	: m_nCapacity{ capacity }
	, m_nSize{ 0 }
	, m_pHead{ NULL }
	, m_pEnd{ NULL }
{
}

int LFUCache::get(int key)
{
	if (m_nCapacity == 0)
	{
		return -1;
	}
	if (m_mapCache[key] == NULL)
	{
		return -1;
	}
	int value{ m_mapCache[key]->val };
	moveToEnd(key);
	return value;
}

void LFUCache::put(int key, int value)
{
	if (m_nCapacity == 0)
	{
		return;
	}

	if (m_mapCache[key] != NULL)
	{
		m_mapCache[key]->val = value;
		moveToEnd(key);
		return;
	}
	// remove
	if (m_nSize == m_nCapacity)
	{
		CacheNode *removeNode{ m_pHead };
		m_pHead = removeNode->next;
		if (m_pHead != NULL)
		{
			m_pHead->parent = NULL;
			if (m_pHead->count != removeNode->count)
			{
				m_mapQueue[removeNode->count].first = NULL;
				m_mapQueue[removeNode->count].second = NULL;
			}
			else
			{
				m_mapQueue[removeNode->count].first = m_pHead;
			}
		}
		else
		{
			m_pEnd = NULL;
			m_mapQueue[removeNode->count].first = NULL;
			m_mapQueue[removeNode->count].second = NULL;
		}
		m_mapCache[removeNode->k] = NULL;
		delete removeNode;
		--m_nSize;
	}
	// insert
	CacheNode* pNode{ new CacheNode(key, value) };
	if (m_mapQueue[pNode->count].first == NULL)
	{
		if (m_pHead == NULL)
		{
			m_pHead = pNode;
			m_pEnd = pNode;
		}
		else
		{
			m_pHead->parent = pNode;
			pNode->next = m_pHead;
			m_pHead = pNode;
		}
		m_mapQueue[pNode->count] = { pNode, pNode };
	}
	else
	{
		CacheNode *pEndQueue{ m_mapQueue[pNode->count].second };
		if (pEndQueue->next == NULL)
		{
			m_pEnd->next = pNode;
			pNode->parent = m_pEnd;
			m_pEnd = pNode;
		}
		else
		{
			pNode->next = pEndQueue->next;
			pNode->parent = pEndQueue;
			pEndQueue->next->parent = pNode;
			pEndQueue->next = pNode;
		}
		m_mapQueue[pNode->count].second = pNode;
	}
	m_mapCache[key] = pNode;
	++m_nSize;
}

void LFUCache::moveToEnd(int key)
{
	CacheNode *pNode{ m_mapCache[key] };
	// end
	if (pNode->next == NULL)
	{
		if (pNode->parent == NULL || pNode->parent->count != pNode->count)
		{
			m_mapQueue[pNode->count] = { NULL, NULL };
		}
		else
		{
			m_mapQueue[pNode->count].second = pNode->parent;
		}
		pNode->count++;
		m_mapQueue[pNode->count] = { pNode, pNode };
		return;
	}

	// head
	if (pNode->parent == NULL)
	{
		if (pNode->count == pNode->next->count)
		{
			m_mapQueue[pNode->count].first = pNode->next;
		}
		else
		{
			m_mapQueue[pNode->count] = { NULL, NULL };
		}
		pNode->count++;
		CacheNode *pCurEnd = NULL;
		if (m_mapQueue[pNode->count].first == NULL)
		{
			pCurEnd = m_mapQueue[pNode->count - 1].second;
			m_mapQueue[pNode->count] = { pNode, pNode };
		}
		else
		{
			pCurEnd = m_mapQueue[pNode->count].second;
			m_mapQueue[pNode->count].second = pNode;
		}
		if (pCurEnd == NULL)
		{
			return;
		}
		pNode->next->parent = NULL;
		m_pHead = pNode->next;

		pNode->next = pCurEnd->next;
		pNode->parent = pCurEnd;
		pCurEnd->next = pNode;
		if (pNode->next == NULL)
		{
			m_pEnd = pNode;
		}
		else
		{
			pNode->next->parent = pNode;
		}
		return;
	}

	// middle
	if (pNode->parent->count == pNode->count && pNode->next->count > pNode->count)
	{
		m_mapQueue[pNode->count].second = pNode->parent;
	}
	else if (pNode->parent->count < pNode->count && pNode->next->count == pNode->count)
	{
		m_mapQueue[pNode->count].first = pNode->next;
	}
	else if (pNode->parent->count < pNode->count && pNode->next->count > pNode->count)
	{
		m_mapQueue[pNode->count] = { NULL, NULL };
	}
	pNode->count++;
	CacheNode *pCurEnd = NULL;
	if (m_mapQueue[pNode->count].first == NULL)
	{
		pCurEnd = m_mapQueue[pNode->count - 1].second;
		m_mapQueue[pNode->count] = { pNode, pNode };
	}
	else
	{
		pCurEnd = m_mapQueue[pNode->count].second;
		m_mapQueue[pNode->count].second = pNode;
	}
	if (pCurEnd == NULL || pCurEnd->next == pNode)
	{
		return;
	}

	pNode->next->parent = pNode->parent;
	pNode->parent->next = pNode->next;

	pNode->next = pCurEnd->next;
	pNode->parent = pCurEnd;
	pCurEnd->next = pNode;
	if (pNode->next == NULL)
	{
		m_pEnd = pNode;
	}
	else
	{
		pNode->next->parent = pNode;
	}
}

void LFUCache::release()
{
}

void LFUCache::PrintMap()
{
	printf("Capacity:%d Size:%d\n", m_nCapacity, m_nSize);
	if (m_pHead != NULL)
	{
		printf("Head:%d End:%d\n", m_pHead->k, m_pEnd->k);
	}
	for (auto &it : m_mapQueue)
	{
		CacheNode *p{ it.second.first };
		if (p == NULL)
		{
			continue;
		}
		while (p != it.second.second)
		{
			printf("Key:%d, Value:%d, Count:%d\n", p->k, p->val, p->count);
			p = p->next;
		}
		printf("Key:%d, Value:%d, Count:%d\n", p->k, p->val, p->count);
	}
}
