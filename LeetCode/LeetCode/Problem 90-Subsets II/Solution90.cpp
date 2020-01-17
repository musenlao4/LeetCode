#include "stdafx.h"
#include "Solution90.h"

Solution90::Solution90()
{
}


Solution90::~Solution90()
{
}

vector<vector<int>> Solution90::subsetsWithDup(vector<int>& nums)
{
	sort(nums.begin(), nums.end());
	vector<vector<int>> res{ vector<int>{} };
	int end{ 0 };
	for (int i = 0; i < nums.size(); ++i)
	{
		if (i == 0)
		{
			res.emplace_back(vector<int>{ nums[i] });
			end = 1;
		}
		else if (nums[i] != nums[i - 1])
		{
			end = res.size();
			for (int j = 0; j < end; ++j)
			{
				vector<int> temp{ res[j] };
				temp.emplace_back(nums[i]);
				res.emplace_back(temp);
			}
		}
		else
		{
			int record{ static_cast<int>(res.size()) };
			for (int j = end; j < record; ++j)
			{
				vector<int> temp{ res[j] };
				temp.emplace_back(nums[i]);
				res.emplace_back(temp);
			}
			end = record;
		}
	}
	return res;
}
