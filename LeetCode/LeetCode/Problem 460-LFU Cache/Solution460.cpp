#include "stdafx.h"
#include "Solution460.h"

Solution460::Solution460()
	: m_pLFUCache{ NULL }
{
}


Solution460::~Solution460()
{
	if (m_pLFUCache != NULL)
	{
		delete m_pLFUCache;
		m_pLFUCache = NULL;
	}
}

void Solution460::operation(vector<string> &commands, vector<vector<int>> &values)
{
	for (int i = 0; i < commands.size(); ++i)
	{
		if (commands[i].compare("LFUCache") == 0)
		{
			init(values[i][0]);
		}
		else if (commands[i].compare("put") == 0)
		{
			put(values[i][0], values[i][1]);
		}
		else if (commands[i].compare("get") == 0)
		{
			printf("get: key:%d\n", values[i][0]);
		}
	}
}

void Solution460::init(int capacity)
{
	if (m_pLFUCache != NULL)
	{
		delete m_pLFUCache;
		m_pLFUCache = NULL;
	}
	m_pLFUCache = new  LFUCache(capacity);
}

int Solution460::get(int key)
{
	if (m_pLFUCache == NULL)
	{
		return -1;
	}
	return m_pLFUCache->get(key);
}

void Solution460::put(int key, int value)
{
	if (m_pLFUCache == NULL)
	{
		return;
	}
	m_pLFUCache->put(key, value);
}

void Solution460::print()
{
	if (m_pLFUCache == NULL)
	{
		return;
	}
	m_pLFUCache->PrintMap();
}
