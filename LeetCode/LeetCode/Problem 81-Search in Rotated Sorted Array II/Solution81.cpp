#include "stdafx.h"
#include "Solution81.h"

Solution81::Solution81()
{
}


Solution81::~Solution81()
{
}

bool Solution81::search(vector<int>& nums, int target)
{
	if (nums.empty())
		return false;
	int index{ 0 };
	int count{ 0 };
	while (count < nums.size())
	{
		if (nums[index] == target)
			return true;
		else if (nums[index] > target)
		{
			int nextIndex = index - 1;
			if (nextIndex < 0)
				nextIndex = nums.size() - 1;
			if (index == nextIndex || nums[index] < nums[nextIndex])
				return false;
			index = nextIndex;
		}
		else
		{
			int nextIndex = index + 1;
			nextIndex = nextIndex % nums.size();
			if (index == nextIndex || nums[index] > nums[nextIndex])
				return false;
			index = nextIndex;
		}
		++count;
	}
	return false;
}
