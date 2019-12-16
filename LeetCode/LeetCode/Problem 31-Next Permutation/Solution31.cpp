#include "stdafx.h"
#include "Solution31.h"

Solution31::Solution31()
{
}


Solution31::~Solution31()
{
}

void Solution31::nextPermutation(vector<int>& nums)
{
	int begin{ 0 };
	for (int i = nums.size() - 1; i > 0 ; --i)
	{
		if (nums[i - 1] < nums[i])
		{
			begin = i;
			int pos{ findLastGeater(nums, nums[i - 1], i, nums.size() - 1) };
			int temp{ nums[i - 1] };
			nums[i - 1] = nums[pos];
			nums[pos] = temp;
			break;
		}
	}
	reserve(nums, begin, nums.size() - 1);
}

void Solution31::reserve(vector<int>& nums, int begin, int end)
{
	int n{ end - begin + 1 };
	for (int i = 0; i < n / 2; ++i)
	{
		int temp{ nums[begin + i] };
		nums[begin + i] = nums[end - i];
		nums[end - i] = temp;
	}
}

int Solution31::findLastGeater(vector<int>& nums, int sentry, int begin, int end)
{
	for (int i = begin; i <= end; ++i)
	{
		if (sentry >= nums[i] )
		{
			return i - 1;
		}
	}
	return end;
}
