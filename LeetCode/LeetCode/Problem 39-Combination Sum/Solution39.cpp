#include "stdafx.h"
#include "Solution39.h"

Solution39::Solution39()
{
}


Solution39::~Solution39()
{
}

vector<vector<int>> Solution39::combinationSum(vector<int>& candidates, int target)
{
	vector<vector<int>> res{};
	sort(candidates.begin(), candidates.end());
	vector<int> one{};
	lookup(candidates, res, one, 0, target);
	return res;
}

void Solution39::lookup(vector<int>& candidates, vector<vector<int>>& res, vector<int>& one, int begin, int target)
{
	for (int i = begin; i < candidates.size(); ++i)
	{
		if (target - candidates[i] < 0)
		{
			break;
		}
		else if (target - candidates[i] > 0)
		{
			one.emplace_back(candidates[i]);
			int next = target - candidates[i];
			lookup(candidates, res, one, i, next);
			one.erase(one.end() - 1);
		}
		else
		{
			one.emplace_back(candidates[i]);
			res.emplace_back(one);
			one.erase(one.end() - 1);
			break;
		}
	}
}
