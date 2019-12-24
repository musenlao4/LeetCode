#include "stdafx.h"
#include "Solution47.h"

Solution47::Solution47()
{
}


Solution47::~Solution47()
{
}

vector<vector<int>> Solution47::permuteUnique(vector<int>& nums)
{
	sort(nums.begin(), nums.end());
	lookupNext(nums, 0);
	return res;
}

void Solution47::lookupNext(vector<int>& nums, int start)
{
	if (start == nums.size() - 1)
	{
		res.emplace_back(nums);
		return;
	}
	lookupNext(nums, start + 1);
	for (int i = start + 1; i < nums.size(); ++i)
	{
		if (nums[start] == nums[i])
		{
			continue;
		}
		int temp{ nums[start] };
		nums[start] = nums[i];
		nums[i] = temp;
		lookupNext(nums, start + 1);
	}
	int num{ nums[start] };
	nums.erase(nums.begin() + start);
	nums.emplace_back(num);
}
