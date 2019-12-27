#include "stdafx.h"
#include "Solution75.h"

Solution75::Solution75()
{
}


Solution75::~Solution75()
{
}

void Solution75::sortColors(vector<int>& nums)
{
	int count{ 0 };
	for (auto it = nums.begin(); it != nums.end();)
	{
		if (count >= nums.size())
		{
			return;
		}
		if (*it == 0)
		{
			it = nums.erase(it);
			nums.insert(nums.begin(), 0);
			++it;
		}
		else if (*it == 2)
		{
			it = nums.erase(it);
			nums.emplace_back(2);
		}
		else
		{
			++it;
		}
		++count;
	}
}
