#include "stdafx.h"
#include "Solution40.h"

Solution40::Solution40()
	: m_res{}
	, m_one{}
{
}


Solution40::~Solution40()
{
}

vector<vector<int>> Solution40::combinationSum2(vector<int>& candidates, int target)
{
	sort(candidates.begin(), candidates.end());
	lookup(candidates, target, 0);
	return m_res;
}

void Solution40::lookup(vector<int>& candidates, int target, int begin)
{
	for (int i = begin; i < candidates.size();)
	{
		if (target - candidates[i] == 0)
		{
			m_one.emplace_back(candidates[i]);
			m_res.emplace_back(m_one);
			m_one.erase(m_one.end() - 1);
			break;
		}
		else if (target - candidates[i] > 0)
		{
			m_one.emplace_back(candidates[i]);
			target -= candidates[i];
			lookup(candidates, target, i + 1);
			target += candidates[i];
			m_one.erase(m_one.end() - 1);
			int current{ candidates[i] };
			while (i < candidates.size() && current == candidates[i])
			{
				++i;
			}
		}
		else
		{
			break;
		}
	}
}
