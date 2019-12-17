#include "stdafx.h"
#include "Solution34.h"

Solution34::Solution34()
{
}


Solution34::~Solution34()
{
}

vector<int> Solution34::searchRange(vector<int>& nums, int target)
{
	if (nums.empty())
	{
		return vector<int>{-1, -1};
	}
	int pos{ find(nums, target, 0, nums.size() - 1) };
	if (pos == -1)
	{
		return vector<int>{-1, -1};
	}
	int left{ pos };
	int right{ pos };
	bool isLeftDone{ false };
	bool isRightDone{ false };
	while (!isLeftDone || !isRightDone)
	{
		if (!isLeftDone)
		{
			if (left - 1 >= 0 && nums[left - 1] == target)
			{
				--left;
			}
			else
			{
				isLeftDone = true;
			}
		}

		if (!isRightDone)
		{
			if (right + 1 < nums.size() && nums[right + 1] == target)
			{
				++right;
			}
			else
			{
				isRightDone = true;
			}
		}
	}
	return vector<int>{left, right};
}

int Solution34::find(vector<int>& nums, const int & target, const int & begin, const int & end)
{
	if (begin == end)
	{
		return nums[begin] == target ? begin : -1;
	}

	int mid{ (begin + end) / 2 };
	if (nums[mid] > target)
	{
		if (mid == begin)
		{
			return -1;
		}
		return find(nums, target, begin, mid - 1);
	}
	else if (nums[mid] < target)
	{
		return find(nums, target, mid + 1, end);
	}
	else
	{
		return mid;
	}
}
