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

int Solution16::op_delta(int my_sum, int target)
{
	return my_sum > target ? my_sum - target : target - my_sum;
}

int Solution16::threeSumClosest(vector<int>& nums, int target)
{
	common::FastSort<int>(nums);

	int sum_closest{ 0 };
	unsigned int distance{ INT_MAX };
	for (int x = 0; x < nums.size() - 2; ++x)
	{
		for (int y = x + 1; y < nums.size() - 1; ++y)
		{
			for (int z = y + 1; z < nums.size(); ++z)
			{
				int temp_sum = nums[x] + nums[y] + nums[z];
				int temp_delta = op_delta(temp_sum, target);
				if (distance == 0)
				{
					return sum_closest;
				}
				if (temp_delta < distance)
				{
					sum_closest = temp_sum;
					distance = temp_delta;
				}
				if (temp_sum > target)
				{
					break;
				}
			}
		}
	}

	return sum_closest;
}
