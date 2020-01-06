#include "stdafx.h"
#include "Solution62.h"

Solution62::Solution62()
{
}


Solution62::~Solution62()
{
}

int Solution62::uniquePaths(int m, int n)
{
	vector<vector<int>> dp(n, vector<int>(m, 1));
	for (int i = 1; i < n; ++i)
	{
		for (int j = 1; j < m; ++j)
		{
			dp[i][j] = dp[i - 1][j] + dp[i][j - 1];
		}
	}
	return dp[n - 1][m - 1];
}

int Solution62::uniquePathsEx(int m, int n)
{
	if (m == 1 || n == 1)
		return 1;
	pair<int, int> order = m < n ? pair<int, int>(m, n) : pair<int, int>(n, m);
	--order.first;
	double res{ 1 };
	for (int i = 1; i <= order.first; ++i)
	{
		res *= static_cast<double>(order.second + i - 1);
		res /= static_cast<double>(i);
	}
	return static_cast<int>(res);
}
