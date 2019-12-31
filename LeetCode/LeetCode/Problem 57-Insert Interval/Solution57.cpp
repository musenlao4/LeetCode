#include "stdafx.h"
#include "Solution57.h"

Solution57::Solution57()
{
}


Solution57::~Solution57()
{
}

vector<vector<int>> Solution57::insert(vector<vector<int>>& intervals, vector<int>& newInterval)
{
	vector<vector<int>>::iterator left{ intervals.begin() };
	vector<vector<int>>::iterator insertInterval = intervals.end();
	while (left != intervals.end())
	{
		if (newInterval[0] >= left->at(0) && newInterval[0] <= left->at(1))
		{
			insertInterval = left;
			break;
		}
		else if (newInterval[0] < left->at(0))
		{
			break;
		}
		++left;
	}
	if (left == intervals.end() || newInterval[1] < left->at(0))
	{
		intervals.insert(left, newInterval);
		return intervals;
	}
	if (insertInterval == intervals.end())
	{
		insertInterval = left;
		(*insertInterval)[0] = newInterval[0];
	}

	for (auto right = left; right != intervals.end();)
	{
		if (newInterval[1] < right->at(0))
		{
			break;
		}
		else if (newInterval[1] >= right->at(0) && newInterval[1] <= right->at(1))
		{
			if (insertInterval != right)
			{
				(*insertInterval)[1] = right->at(1);
				right = intervals.erase(right);
			}
			break;
		}
		else
		{
			(*insertInterval)[1] = newInterval[1];
			if (insertInterval != right)
			{
				right = intervals.erase(right);
			}
			else
			{
				++right;
			}
		}
	}
	return intervals;
}
