#include "stdafx.h"
#include "Solution76.h"

Solution76::Solution76()
{
}


Solution76::~Solution76()
{
}

string Solution76::minWindow(string s, string t)
{
	map<char, int> hashCmp{};
	for (auto &c : t)
	{
		if (hashCmp.find(c) == hashCmp.end())
		{
			hashCmp.emplace(c, 1);
		}
		else
		{
			++hashCmp[c];
		}
	}

	map<char, vector<int>> indexQ{};
	pair<int, int> minInvertal{ -1, -1 };
	int count{ static_cast<int>(t.length()) };
	for (int i = 0; i < s.length(); ++i)
	{
		if (hashCmp[s[i]] == 0 && indexQ[s[i]].size() == 0)
		{
			continue;
		}
		if (hashCmp[s[i]] > 0)
		{
			--hashCmp[s[i]];
			--count;
		}
		else
		{
			indexQ[s[i]].erase(indexQ[s[i]].begin());
		}
		indexQ[s[i]].emplace_back(i);

		if (count == 0)
		{
			int left{ INT_MAX };
			int right{ i };
			for (auto &index : indexQ)
			{
				if (index.second.size() > 0 && index.second.front() < left)
				{
					left = index.second.front();
				}
			}
			if (minInvertal.first == -1 || right - left < minInvertal.second - minInvertal.first)
			{
				minInvertal.first = left;
				minInvertal.second = right;
			}
		}
	}

	int size{ minInvertal.second - minInvertal.first + 1 };
	return minInvertal.first == -1 ? "" : s.substr(minInvertal.first, size);
}
