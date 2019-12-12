#include "stdafx.h"
#include "Solution28.h"

Solution28::Solution28()
{
}


Solution28::~Solution28()
{
}

int Solution28::strStr(string haystack, string needle)
{
	int pos{ static_cast<int>(haystack.find(needle)) };
	return pos;
}

int Solution28::KMP(string haystack, string needle)
{
	if (needle.empty())
	{
		return 0;
	}
	else if (haystack.empty())
	{
		return -1;
	}

	vector<int> nexts{ 0 };
	for (int i = 1; i < needle.size(); ++i)
	{
		string str{ needle.substr(0, i) };
		int next{ 0 };
		for (int j = 0; j < i; ++j)
		{
			if (compareStr(str, j))
			{
				next = j;
			}
		}
		nexts.push_back(next);
	}

	int haystackPos{ 0 };
	int needlePos{ 0 };
	int findPos{ -1 };
	while (haystackPos < haystack.size())
	{
		if (haystack[haystackPos] == needle[needlePos])
		{
			++haystackPos;
			++needlePos;
			if (needlePos == needle.size())
			{
				findPos = haystackPos - needlePos;
				break;
			}
		}
		else if (needlePos == 0)
		{
			++haystackPos;
		}
		else
		{
			needlePos = nexts[needlePos];
		}
		if (haystack.size() - haystackPos < needle.size() - needlePos)
		{
			break;
		}
	}
	return findPos;
}

bool Solution28::compareStr(string str, int n)
{
	if (n == 0)
	{
		return false;
	}
	for (int i = 0; i < n; ++i)
	{
		if (str[i] != str[str.size() - n + i])
		{
			return false;
		}
	}
	return true;
}
