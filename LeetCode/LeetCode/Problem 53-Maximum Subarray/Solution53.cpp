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
	int max{ nums[0] };
	int curSum{ nums[0] };
	for (int i = 1; i < nums.size(); ++i)
	{
		curSum = curSum + nums[i] > nums[i] ? curSum + nums[i] : nums[i];
		max = curSum > max ? curSum : max;
	}
	return max;
}
