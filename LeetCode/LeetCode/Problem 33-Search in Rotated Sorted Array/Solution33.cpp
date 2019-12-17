#include "stdafx.h"
#include "Solution33.h"

Solution33::Solution33()
{
}


Solution33::~Solution33()
{
}

int Solution33::search(vector<int>& nums, int target)
{
	if (nums.empty())
	{
		return -1;
	}
	int begin{ 0 };
	for (int i = 1; i < nums.size(); ++i)
	{
		if (nums[i - 1] > nums[i])
		{
			begin = i;
			break;
		}
	}
	int size{ static_cast<int>(nums.size()) };
	int end{ (begin - 1 + size) % size };
	return find(nums, target, begin, end);
}

int Solution33::find(vector<int>& nums, const int &target, const int &begin, const int &end)
{
	if (begin == end && nums[begin] != target)
	{
		return -1;
	}
	int size{ static_cast<int>(nums.size()) };
	int mid{ 0 };
	if (begin > end)
	{
		mid = (begin + end + size) / 2 % size;
	}
	else
	{
		mid = (begin + end) / 2;
	}
	if (nums[mid] > target)
	{
		if (mid == begin)
		{
			return -1;
		}
		int next{ (mid - 1 + size) % size };
		return find(nums, target, begin, next);
	}
	else if (nums[mid] < target)
	{
		int next{ (mid + 1) % size };
		return find(nums, target, next, end);
	}
	else
	{
		return mid;
	}
}
