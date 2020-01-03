#include "stdafx.h"
#include "Solution115.h"

Solution115::Solution115()
{
}


Solution115::~Solution115()
{
}

int Solution115::numDistinct(string s, string t)
{
	vector<vector<int64_t>> dp(t.length() + 1, vector<int64_t>(s.length() + 1, 0));
	for (int t_i = 0; t_i <= t.length(); ++t_i)
	{
		for (int s_i = 0; s_i <= s.length(); ++s_i)
		{
			if (t_i == 0)
			{
				dp[t_i][s_i] = 1;
				continue;
			}
			else if (s_i == 0)
			{
				continue;
			}
			dp[t_i][s_i] = dp[t_i][s_i - 1];
			if (t[t_i - 1] == s[s_i - 1])
			{
				dp[t_i][s_i] += dp[t_i - 1][s_i - 1];
			}
		}
	}
	return dp[t.length()][s.length()];
}
