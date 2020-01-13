#include "stdafx.h"
#include "Solution84.h"

Solution84::Solution84()
{
}


Solution84::~Solution84()
{
}

int Solution84::largestRectangleArea(vector<int>& heights)
{
	if (heights.empty())
		return 0;
	int largest{ 0 };
	vector<pair<int, int>> stack{};
	for (int i{ 0 }; i < heights.size(); ++i)
	{
		int index{ -1 };
		while (!stack.empty() && stack.back().first > heights[i])
		{
			int area{ stack.back().first * (i - stack.back().second) };
			largest = area > largest ? area : largest;
			index = stack.back().second;
			stack.pop_back();
		}
		if (heights[i] != 0)
		{
			if (index == -1)
				stack.emplace_back(pair<int, int>(heights[i], i));
			else
				stack.emplace_back(pair<int, int>(heights[i], index));
		}
	}
	while (!stack.empty())
	{
		int area{ stack.back().first * (static_cast<int>(heights.size()) - stack.back().second) };
		largest = area > largest ? area : largest;
		stack.pop_back();
	}
	return largest;
}
