#include "stdafx.h"
#include "Solution63.h"

Solution63::Solution63()
{
}


Solution63::~Solution63()
{
}

int Solution63::uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid)
{
	if (obstacleGrid.empty() || obstacleGrid[0].empty())
		return 0;
	vector<vector<int>> dp(obstacleGrid.size(), vector<int>(obstacleGrid[0].size(), 0));
	for (int i = 0; i < dp.size(); ++i)
		for (int j = 0; j < dp[i].size(); ++j)
			if (obstacleGrid[i][j] == 1)
				dp[i][j] = 0;
			else if (i == 0 && j == 0)
				dp[i][j] = 1;
			else if (i == 0)
				dp[i][j] = dp[i][j - 1];
			else if (j == 0)
				dp[i][j] = dp[i - 1][j];
			else
				dp[i][j] = dp[i - 1][j] + dp[i][j - 1];
	return dp[obstacleGrid.size() - 1][obstacleGrid[0].size() - 1];
}
