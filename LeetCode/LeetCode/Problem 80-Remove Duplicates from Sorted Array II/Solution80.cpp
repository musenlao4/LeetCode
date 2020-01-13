#include "stdafx.h"
#include "Solution80.h"

Solution80::Solution80()
{
}


Solution80::~Solution80()
{
}

int Solution80::removeDuplicates(vector<int>& nums)
{
	int current{};
	int count{ 0 };
	for (auto it{ nums.begin() }; it != nums.end();)
	{
		if (it == nums.begin() || current != *it)
		{
			current = *it;
			count = 1;
			++it;
		}
		else if (current == *it && count < 2)
		{
			++count;
			++it;
		}
		else if (current == *it && count == 2)
		{
			it = nums.erase(it);
		}
	}
	return nums.size();
}
