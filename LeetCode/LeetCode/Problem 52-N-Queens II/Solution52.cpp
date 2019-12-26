#include "stdafx.h"
#include "Solution52.h"

Solution52::Solution52()
{
}


Solution52::~Solution52()
{
}

int Solution52::totalNQueens(int n)
{
	if (n == 1)
	{
		m_count = 1;
		return m_count;
	}
	m_count = 0;
	lookup.resize(n*n, 0);
	pos.resize(n, 0);
	findNext(n, 0);
	return m_count;
}

void Solution52::findNext(const int & n, const int & index)
{
	if (index == n)
	{
		// 对称性
		if (pos[0] == n - 1 - pos[0])
		{
			++m_count;
		}
		else
		{
			m_count += 2;
		}
		return;
	}
	int y{ n * index };
	for (int i = 0; i < n; ++i)
	{
		// 最顶层只需要搜索一半
		if (index == 0 && i > (n - 1) / 2)
		{
			return;
		}
		if (lookup[y + i] != 0)
		{
			continue;
		}
		pos[index] = i;
		fillIndex(n, index, i);
		findNext(n, index + 1);
		revertIndex(n, index, i);
		pos[index] = 0;
	}
}

void Solution52::fillIndex(const int & n, const int & index, const int & pos)
{
	int y{ n* index };
	for (int i = 0; i < n; ++i)
	{
		if (lookup[y + i] == 0)
		{
			lookup[y + i] = index + 1;
		}
	}
	int count{ 0 };
	for (int i = index; i < n; ++i)
	{
		if (lookup[i * n + pos] == 0)
		{
			lookup[i * n + pos] = index + 1;
		}
		int left{ i * n + pos - count };
		int right{ i * n + pos + count };
		if (left >= i * n && lookup[left] == 0)
		{
			lookup[left] = index + 1;
		}
		if (right < (i + 1) * n && lookup[right] == 0)
		{
			lookup[right] = index + 1;
		}
		++count;
	}
}

void Solution52::revertIndex(const int & n, const int & index, const int & pos)
{
	int y{ n* index };
	for (int i = 0; i < n; ++i)
	{
		if (lookup[y + i] == index + 1)
		{
			lookup[y + i] = 0;
		}
	}
	int count{ 0 };
	for (int i = index; i < n; ++i)
	{
		if (lookup[i * n + pos] == index + 1)
		{
			lookup[i * n + pos] = 0;
		}
		int left{ i * n + pos - count };
		int right{ i * n + pos + count };
		if (left >= i * n && lookup[left] == index + 1)
		{
			lookup[left] = 0;
		}
		if (right < (i + 1) * n && lookup[right] == index + 1)
		{
			lookup[right] = 0;
		}
		++count;
	}
}
