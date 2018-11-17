#include "stdafx.h"
#include "Solution16.h"
#include "common/common.h"
#include <cmath>

Solution16::Solution16()
{
}


Solution16::~Solution16()
{
}

int Solution16::FindClosest(vector<int>& nums, int pos, int target)
{
	int targetRes{ target - nums[pos] };
}

int Solution16::threeSumClosest(vector<int>& nums, int target)
{
	common::FastSort<int>(nums);

	int flag{ nums[0] + nums[1] + nums[2] };

	for (int i = 3; i < nums.size(); ++i)
	{

	}

	return 0;
}
