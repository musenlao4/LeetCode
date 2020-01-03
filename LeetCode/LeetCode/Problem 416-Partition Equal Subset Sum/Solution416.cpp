#include "stdafx.h"
#include "Solution416.h"

Solution416::Solution416()
{
}


Solution416::~Solution416()
{
}

bool Solution416::canPartition(vector<int>& nums)
{
	int sum{ 0 };
	for (auto num : nums)
	{
		sum += num;
	}
	if (sum % 2 == 1)
	{
		return false;
	}
	int target{ sum / 2 };
	//vector<vector<int>> dp(nums.size() + 1, vector<int>(target + 1, false));
	vector<int> dp(target + 1, false);
	//for (int i = 0; i < nums.size() + 1; ++i)
	//{
	//	dp[i][0] = true;
	//}
	dp[0] = true;
	/*
	for (int i = 1; i < nums.size() + 1; ++i)
	{
		for (int j = 0; j <= target; ++j)
		{
			dp[i][j] = dp[i - 1][j];
			if (j >= nums[i - 1])
			{
				dp[i][j] = dp[i - 1][j] || dp[i - 1][j - nums[i - 1]];
			}
			if (j == target && dp[i][j])
			{
				return true;
			}
		}
	}
	*/
	for (int i = 0; i < nums.size(); ++i)
	{
		for (int v = target; v >= 0; --v)
		{
			if (v >= nums[i])
			{
				dp[v] = dp[v] || dp[v - nums[i]];
			}
			if (v == target && dp[v])
			{
				return true;
			}
		}
	}
	return false;
}
