#include "stdafx.h"
#include "LRUCache.h"

LRUCache::LRUCache()
	: m_nCapacity{ 0 }
	, m_nSize{ 0 }
	, m_pHead{ NULL }
	, m_pEnd{ NULL }
{
}

LRUCache::~LRUCache()
{
	release();
}

LRUCache::LRUCache(int capacity)
	: m_nCapacity{ capacity }
	, m_nSize { 0 }
	, m_pHead{ NULL }
	, m_pEnd{ NULL }
{
}

int LRUCache::get(int key)
{
	if (m_mapCache[key] == NULL)
	{
		return -1;
	}
	int value{ m_mapCache[key]->val };
	moveToEnd(key);
	return value;
}

void LRUCache::put(int key, int value)
{
	if (m_mapCache[key] == NULL)
	{
		CacheNode *pNode{ new CacheNode(key, value) };
		if (m_nSize == m_nCapacity)
		{
			CacheNode *p = m_pHead;
			m_pHead = m_pHead->next;
			if (m_pHead != NULL)
			{
				m_pHead->parent = NULL;
			}
			else
			{
				m_pEnd = NULL;
			}
			m_mapCache[p->k] = NULL;
			delete p;
			--m_nSize;
		}
		m_mapCache[key] = pNode;
		if (m_pEnd == NULL)
		{
			m_pHead = pNode;
			m_pEnd = pNode;
		}
		else
		{
			m_pEnd->next = pNode;
			pNode->parent = m_pEnd;
			m_pEnd = pNode;
		}
		++m_nSize;
	}
	else
	{
		m_mapCache[key]->val = value;
		moveToEnd(key);
	}
}

void LRUCache::moveToEnd(int key)
{
	CacheNode *pNode{ m_mapCache[key] };
	if (pNode->next == NULL)
	{
		return;
	}
	if (pNode->parent == NULL)
	{
		m_pHead = pNode->next;
		m_pHead->parent = NULL;

	}
	else
	{
		CacheNode *pParent{ pNode->parent };
		pParent->next = pNode->next;
		pNode->next->parent = pParent;
	}
	m_pEnd->next = pNode;
	pNode->next = NULL;
	pNode->parent = m_pEnd;
	m_pEnd = pNode;
}

void LRUCache::release()
{
	while (m_pHead != NULL)
	{
		CacheNode *p{ m_pHead };
		m_pHead = p->next;
		delete p;
	}
	m_pEnd = NULL;
	m_nCapacity = 0;
	m_nSize = 0;
	m_mapCache.clear();
}
