#include "stdafx.h"
#include "Solution41.h"

Solution41::Solution41()
{
}


Solution41::~Solution41()
{
}

int Solution41::firstMissingPositive(vector<int>& nums)
{
	vector<int> lookup{};
	lookup.resize(nums.size(), 0);
	for (auto num : nums)
	{
		if (num > 0 && num <= nums.size())
		{
			lookup[num - 1] = 1;
		}
	}

	for (int i = 0; i < lookup.size(); i++)
	{
		if (lookup[i] == 0)
		{
			return i + 1;
		}
	}
	return lookup.size() + 1;
}
