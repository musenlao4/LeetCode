#include "stdafx.h"
#include "Solution42.h"

Solution42::Solution42()
{
}


Solution42::~Solution42()
{
}

int Solution42::trap(vector<int>& height)
{
	vector<int> res{};
	int lastHeightest{ 0 };
	for (int i = 0; i < height.size(); ++i)
	{
		res.emplace_back(countHeight(height, res, i, lastHeightest));
		if (height[i] >= height[lastHeightest])
		{
			lastHeightest = i;
		}
	}
	return res.empty() ? 0 : res.back();
}

int Solution42::countHeight(vector<int>& height, vector<int>& res, const int& pos, const int& lastHeightest)
{
	if (pos == 0)
	{
		return 0;
	}
	if (pos - lastHeightest <= 1)
	{
		return res[pos - 1];
	}

	int guardHeight{ 0 };
	int guardPos{ 0 };
	if (height[pos] >= height[lastHeightest])
	{
		guardHeight = height[lastHeightest];
		guardPos = lastHeightest;
	}
	else
	{
		for (int i = pos - 1; i >= lastHeightest; --i)
		{
			if (height[pos] <= height[i])
			{
				guardHeight = height[pos];
				guardPos = i;
				break;
			}
		}
	}

	int h{ 0 };
	for (int i = guardPos + 1; i < pos; ++i)
	{
		h += (guardHeight - height[i]);
	}
	if (guardPos > 0)
	{
		h += res[guardPos];
	}
	return h;
}
