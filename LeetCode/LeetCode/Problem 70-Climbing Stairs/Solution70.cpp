#include "stdafx.h"
#include "Solution70.h"

Solution70::Solution70()
{
}


Solution70::~Solution70()
{
}

int Solution70::climbStairs(int n)
{
	if (n == 0)
		return 0;
	if (n == 1)
		return 1;
	if (n == 2)
		return 2;
	vector<int> dp(n, 0);
	dp[0] = 1;
	dp[1] = 2;
	for (int i = 2; i < n; ++i)
		dp[i] = dp[i - 1] + dp[i - 2];
	return dp[n - 1];
}
