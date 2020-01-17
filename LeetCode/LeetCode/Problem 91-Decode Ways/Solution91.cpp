#include "stdafx.h"
#include "Solution91.h"

Solution91::Solution91()
{
}


Solution91::~Solution91()
{
}

int Solution91::numDecodings(string s)
{
	vector<int> dp(s.length(), 0);
	char last{ '0' };
	for (int i = 0; i < s.length(); ++i)
	{
		if (i == 0)
		{
			int cur{ s.at(i) - '0' };
			dp[i] = cur > 0 ? 1 : 0;
			last = s.at(i);
		}
		else if (i == 1)
		{
			int cur{ s.at(i) - '0' };
			dp[i] = cur > 0 ? dp[i - 1] : 0;
			int nums = (last - '0') * 10 + cur;
			dp[i] = nums > 0 && nums <= 26 ? dp[i] + 1 : dp[i];
			last = s.at(i);
		}
		else
		{
			int cur{ s.at(i) - '0' };
			dp[i] = cur > 0 ? dp[i - 1] : 0;
			if (last != '0')
			{
				int nums = (last - '0') * 10 + cur;
				dp[i] = nums > 0 && nums <= 26 ? dp[i] + dp[i - 2] : dp[i];
			}
			last = s.at(i);
		}
		if (dp[i] == 0)
			return 0;
	}
	return dp[s.length() - 1];
}
