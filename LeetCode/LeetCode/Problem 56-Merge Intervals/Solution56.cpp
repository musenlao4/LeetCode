#include "stdafx.h"
#include "Solution56.h"

struct cmp
{
	bool operator()(const vector<int>& vec1, const vector<int>& vec2) const
	{
		return vec1[0] < vec2[0];
	}
};
Solution56::Solution56()
{
}


Solution56::~Solution56()
{
}

vector<vector<int>> Solution56::merge(vector<vector<int>>& intervals)
{
	vector<vector<int>> res{};
	if (intervals.empty())
	{
		return res;
	}
	sort(intervals.begin(), intervals.end(), cmp());
	
	vector<int> interval(intervals.front());
	for (int i = 1; i < intervals.size(); ++i)
	{
		if (intervals[i][0] >= interval[0] && intervals[i][0] <= interval[1] && intervals[i][1] > interval[1])
		{
			interval[1] = intervals[i][1];
		}
		else if (intervals[i][0] > interval[1])
		{
			res.emplace_back(interval);
			interval[0] = intervals[i][0];
			interval[1] = intervals[i][1];
		}
	}
	res.emplace_back(interval);
	return res;
}
