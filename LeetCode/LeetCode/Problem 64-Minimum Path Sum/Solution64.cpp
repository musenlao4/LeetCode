#include "stdafx.h"
#include "Solution64.h"

Solution64::Solution64()
{
}


Solution64::~Solution64()
{
}

int Solution64::minPathSum(vector<vector<int>>& grid)
{
	if (grid.empty() || grid[0].empty())
		return 0;
	vector<vector<int64_t>> dp(grid.size(), vector<int64_t>(grid[0].size(), 0));
	for (int i = 0; i < dp.size(); ++i)
		for (int j = 0; j < dp[i].size(); ++j)
			if (i == 0 && j == 0)
				dp[i][j] = grid[i][j];
			else if (i == 0)
				dp[i][j] = dp[i][j - 1] + grid[i][j];
			else if (j == 0)
				dp[i][j] = dp[i - 1][j] + grid[i][j];
			else
				dp[i][j] = dp[i - 1][j] < dp[i][j - 1] ? dp[i - 1][j] + grid[i][j] : dp[i][j - 1] + grid[i][j];
	return dp[dp.size() - 1][dp[0].size() - 1];
}
