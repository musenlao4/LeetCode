#include "stdafx.h"
#include "Solution35.h"

Solution35::Solution35()
{
}


Solution35::~Solution35()
{
}

int Solution35::searchInsert(vector<int>& nums, int target)
{
	int pos{ find(nums, target, 0, nums.size() - 1) };
	if (pos == nums.size() - 1 && target > nums[pos])
	{
		++pos;
	}
	else if (target > nums[pos])
	{
		++pos;
	}
	return pos;
}

int Solution35::find(vector<int>& nums, const int& target, const int& begin, const int& end)
{
	if (begin == end)
	{
		return begin;
	}
	int mid{ (begin + end) / 2 };
	if (nums[mid] >= target)
	{
		if (mid - 1 < begin)
		{
			return mid;
		}
		return find(nums, target, begin, mid - 1);
	}
	else
	{
		if (mid + 1 > end)
		{
			return mid;
		}
		return find(nums, target, mid + 1, end);
	}
}
