#include "stdafx.h"
#include "Solution26.h"

Solution26::Solution26()
{
}


Solution26::~Solution26()
{
}

int Solution26::removeDuplicates(vector<int>& nums)
{
	if (nums.size() < 1)
	{
		return 0;
	}

	int temp{ nums.at(0) };
	for (auto it = nums.begin() + 1; it != nums.end(); )
	{
		if (*it == temp)
		{
			it = nums.erase(it);
		}
		else
		{
			temp = *it;
			++it;
		}
	}
	return nums.size();
}
