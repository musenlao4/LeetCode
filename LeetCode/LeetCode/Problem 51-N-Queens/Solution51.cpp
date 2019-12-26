#include "stdafx.h"
#include "Solution51.h"

Solution51::Solution51()
{
}


Solution51::~Solution51()
{
}

vector<vector<string>> Solution51::solveNQueens(int n)
{
	if (n == 1)
	{
		res.emplace_back(vector<string>{"Q"});
		return res;
	}
	lookup.resize(n*n, 0);
	pos.resize(n, 0);
	findNext(n, 0);
	return res;
}

void Solution51::findNext(const int& n, const int& index)
{
	if (index == n)
	{
		insertRes(n);
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

void Solution51::fillIndex(const int & n, const int & index, const int& pos)
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

void Solution51::revertIndex(const int & n, const int & index, const int& pos)
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

void Solution51::insertRes(const int& n)
{
	vector<string> one{};
	for (int i = 0; i < pos.size(); ++i)
	{
		string q{ "" };
		for (int j = 0; j < n; ++j)
		{
			if (pos[i] == j)
			{
				q += "Q";
			}
			else
			{
				q += ".";
			}
		}
		one.emplace_back(q);
	}
	res.emplace_back(one);
	one.clear();
	// 对称性
	if (pos[0] == n - 1 - pos[0])
	{
		return;
	}
	for (int i = 0; i < pos.size(); ++i)
	{
		string q{ "" };
		for (int j = 0; j < n; ++j)
		{
			if (n - 1 - pos[i] == j)
			{
				q += "Q";
			}
			else
			{
				q += ".";
			}
		}
		one.emplace_back(q);
	}
	res.emplace_back(one);
	one.clear();
}

void Solution51::printLookup()
{
	int n{ static_cast<int>(pos.size()) };
	for (int i = 0; i < lookup.size(); ++i)
	{
		if (i != 0 && i % n == 0)
		{
			printf("\n");
		}
		printf("%d ", lookup[i]);
	}
	printf("\n\n");
}
