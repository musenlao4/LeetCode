#include "stdafx.h"
#include "Solution78.h"

Solution78::Solution78()
{
}


Solution78::~Solution78()
{
}

vector<vector<int>> Solution78::subsets(vector<int>& nums)
{
	vector<vector<int>> res{ vector<int>{} };
	for (auto num : nums)
	{
		int size{ static_cast<int>(res.size()) };
		for (int i = 0; i < size; ++i)
		{
			vector<int> one{ res[i] };
			one.emplace_back(num);
			res.emplace_back(one);
		}
	}
	return res;
}
