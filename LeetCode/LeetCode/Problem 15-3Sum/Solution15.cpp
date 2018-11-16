#include "stdafx.h"
#include "Solution15.h"
#include<unordered_map>

Solution15::Solution15()
{
}


Solution15::~Solution15()
{
}

vector<vector<int>> Solution15::threeSum(vector<int>& nums)
{
	vector<vector<int>> vecResult{};
	if (nums.empty())
	{
		return vecResult;
	}
	std::map<int, int> mapNums{};
	for (auto var : nums)
	{
		auto it{ mapNums.find(var) };
		if (it == mapNums.end())
		{
			mapNums.emplace(var, 1);
		}
		else
		{
			++(it->second);
		}
	}

	for (auto it = mapNums.begin(); it != mapNums.end() ; ++it)
	{
		int Target{ it->first };
		auto itleft{ it };
		auto itright{ mapNums.rbegin() };
		it->second > 1 ? itleft : ++itleft;
		while (itleft != mapNums.end() && itleft->first < itright->first)
		{
			int Sum{ it->first + itleft->first + itright->first };
			if (Sum > 0)
			{
				++itright;
			}
			else if (Sum < 0)
			{
				++itleft;
			}
			else
			{
				vecResult.emplace_back(vector<int>{ it->first, itleft->first, itright->first });
				++itleft;
				++itright;
			}
		}
		if (itleft != mapNums.end() && itleft->first == itright->first && itleft->first + itright->first + it->first == 0)
		{
			if ((itleft->first == 0 && itleft->second > 2) || (itleft->first != 0 && itleft->second > 1))
			{
				vecResult.emplace_back(vector<int>{ it->first, itleft->first, itright->first });
			}
		}
	}

	return vecResult;
}