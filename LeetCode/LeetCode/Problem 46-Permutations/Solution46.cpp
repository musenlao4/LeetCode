#include "stdafx.h"
#include "Solution46.h"

Solution46::Solution46()
{
}


Solution46::~Solution46()
{
}

vector<vector<int>> Solution46::permute(vector<int>& nums)
{
	lookupNext(nums, 0);
	return res;
}

void Solution46::lookupNext(vector<int>& nums, int start)
{
	if (start == nums.size() - 1)
	{
		res.emplace_back(nums);
		return;
	}
	lookupNext(nums, start + 1);
	for (int i = start + 1; i < nums.size(); ++i)
	{
		int temp{ nums[start] };
		nums[start] = nums[i];
		nums[i] = temp;
		lookupNext(nums, start + 1);
	}
	int num{ nums[start] };
	nums.erase(nums.begin() + start);
	nums.emplace_back(num);
}
