#include "stdafx.h"
#include "Solution146.h"


Solution146::Solution146()
	: m_pLRUCache{ NULL }
{
}


Solution146::~Solution146()
{
	if (m_pLRUCache != NULL)
	{
		delete m_pLRUCache;
		m_pLRUCache = NULL;
	}
}

void Solution146::init(int capacity)
{
	if (m_pLRUCache != NULL)
	{
		delete m_pLRUCache;
		m_pLRUCache = NULL;
	}
	m_pLRUCache = new  LRUCache(capacity);
}

int Solution146::get(int key)
{
	if (m_pLRUCache == NULL)
	{
		return -1;
	}
	return m_pLRUCache->get(key);
}

void Solution146::put(int key, int value)
{
	if (m_pLRUCache == NULL)
	{
		return;
	}
	m_pLRUCache->put(key, value);
}
