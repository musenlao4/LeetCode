#include "stdafx.h"
#include "Solution5318.h"

Solution5318::Solution5318()
{
}


Solution5318::~Solution5318()
{
}

int Solution5318::minTaps(int n, vector<int>& ranges)
{
	vector<vector<int>> dp(n + 1, vector<int>(ranges.size(), -1));
	for (int i = 0; i < dp[0].size(); ++i)
		dp[0][i] = 0;
	for (int i = 1; i < dp.size(); ++i)
	{
		for (int j = 0; j < dp[i].size(); ++j)
		{
			if (ranges[j] == 0)
			{
				if (j != 0)
					dp[i][j] = dp[i][j - 1];
			}
			else
			{
				int min = i - ranges[j];
				min = min < 0 ? 0 : min;
				int max = i + ranges[j];
				max = max > n ? n : max;
				if (j == 0)
				{
					if (max >= i)
					{
						for (int k = i; k <=max; ++k)
							dp[k][j] = 1;
					}
				}
				else if (dp[i][j - 1] != -1)
					dp[i][j] = dp[i][j] != -1 && dp[i][j] < dp[i][j - 1] ? dp[i][j] : dp[i][j - 1];
				else if (dp[i - min][j - 1] != -1)
				{
					for (int k = min; k <= max; ++k)
						dp[k][j] = dp[k][j] != -1 && dp[k][j] < dp[min][j - 1] + 1 ? dp[k][j] : dp[min][j - 1] + 1;
				}
			}
		}
	}
	return dp[n][ranges.size() - 1];
}
