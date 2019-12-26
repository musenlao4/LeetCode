#include "stdafx.h"
#include "Solution55.h"

Solution55::Solution55()
{
}


Solution55::~Solution55()
{
}

bool Solution55::canJump(vector<int>& nums)
{
	if (nums.size() <= 1)
	{
		return true;
	}
	int begin{ 0 };
	int end{ 0 };
	while (end < nums.size() - 1)
	{
		int next_end{ 0 };
		for (int i = begin; i <= end && i < nums.size(); ++i)
		{
			next_end = i + nums[i] > next_end ? i + nums[i] : next_end;
		}
		if (next_end == end && end < nums.size() - 1)
		{
			return false;
		}
		begin = end + 1;
		end = next_end;
	}
	return true;
}
