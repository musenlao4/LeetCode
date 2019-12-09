#include "stdafx.h"
#include "Solution18.h"
#include <algorithm>



Solution18::Solution18()
{
}


Solution18::~Solution18()
{
}

vector<vector<int>> Solution18::fourSum(vector<int>& nums, int target)
{
	if (nums.size() < 4)
	{
		return res;
	}
	sort(nums.begin(), nums.end());
	unsigned int nums_size = nums.size();
	for (size_t i = 0; i < nums_size - 3; ++i)
	{
		if (nums[i] + nums[i + 1] + nums[i + 2] + nums[i + 3] > target)
		{
			break;
		}
		if (nums[i] + nums[nums_size -3] + nums[nums_size - 2] + nums[nums_size - 1] < target)
		{
			continue;
		}
		if (i > 0 && nums[i] == nums[i - 1])
		{
			continue;
		}

		for (size_t j = i + 1; j < nums_size - 2; ++j)
		{
			if (nums[i] + nums[j] + nums[j + 1] + nums[j + 2] > target)
			{
				break;
			}
			if (nums[i] + nums[j] + nums[nums_size - 2] + nums[nums_size - 1] < target)
			{
				continue;
			}
			if (j > i + 1 && nums[j] == nums[j - 1])
			{
				continue;
			}

			unsigned int left = j + 1;
			unsigned int right = nums_size - 1;
			while (left < right)
			{
				int sum = nums[i] + nums[j] + nums[left] + nums[right];
				if (sum == target)
				{
					res.emplace_back(vector<int>{ nums[i], nums[j], nums[left], nums[right] });
					int old_left = nums[left];
					int old_right = nums[right];
					while (left < right && nums[left] == old_left )
					{
						++left;
					}
					while (left < right && nums[right] == old_right)
					{
						--right;
					}
				}
				else if (sum < target)
				{
					++left;
				}
				else
				{
					--right;
				}
			}
		}
	}
	return res;
}

