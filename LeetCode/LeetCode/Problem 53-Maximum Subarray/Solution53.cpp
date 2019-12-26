#include "stdafx.h"
#include "Solution53.h"

Solution53::Solution53()
{
}


Solution53::~Solution53()
{
}

int Solution53::maxSubArray(vector<int>& nums)
{
	if (nums.empty())
	{
		return 0;
	}
	int max{ INT_MIN };
	int lastPos{ -1 };
	for (int i = 0; i < nums.size(); ++i)
	{
		int sum{ 0 };
		for (int j = lastPos + 1; j <= i; ++j)
		{
			sum += nums[j];
		}
		if (sum > 0)
		{
			max = sum > max ? sum : max;
			max = nums[i] > max ? nums[i] : max;
		}
		else
		{
			max = nums[i] > max ? nums[i] : max;
			lastPos = i;
		}
	}
	return max;
}
