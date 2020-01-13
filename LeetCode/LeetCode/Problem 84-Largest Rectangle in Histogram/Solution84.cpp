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
	map<int, int> record{};
	for (auto height : heights)
	{
		if (record[height] == 1)
			continue;
		vector<int> dp(heights.size(), 0);
		for (int i = 0; i < heights.size(); ++i)
		{
			if (heights[i] >= height)
			{
				if (i == 0)
					dp[i] = height;
				else
					dp[i] = dp[i - 1] + height;
				largest = dp[i] > largest ? dp[i] : largest;
			}
		}
		record[height] = 1;
	}
	return largest;
}
