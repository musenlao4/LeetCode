#include "stdafx.h"
#include "Solution45.h"

Solution45::Solution45()
{
}


Solution45::~Solution45()
{
}

int Solution45::jump(vector<int>& nums)
{
	if (nums.size() <= 1)
	{
		return 0;
	}
	int step{ 0 };
	int begin{ 0 };
	int end{ 0 };
	while (end < nums.size() - 1)
	{
		int next_end{ end + 1 };
		for (int i = begin; i <= end; i++)
		{
			next_end = i + nums[i] > next_end ? i + nums[i] : next_end;
			if (next_end >= nums.size() - 1)
			{
				return step + 1;
			}
		}
		begin = end + 1;
		end = next_end;
		++step;
	}
	return step + 1;
}
