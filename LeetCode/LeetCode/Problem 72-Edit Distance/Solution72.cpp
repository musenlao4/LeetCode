#include "stdafx.h"
#include "Solution72.h"

Solution72::Solution72()
{
}


Solution72::~Solution72()
{
}

int Solution72::minDistance(string word1, string word2)
{
	if (word1.empty())
		return word2.length();
	if (word2.empty())
		return word1.length();
	vector<vector<int>> dp(word2.length() + 1, vector<int>(word1.length() + 1, 0));
	for (int i = 0; i <= word2.length(); ++i)
	{
		dp[i][0] = i;
	}
	for (int i = 0; i <= word1.length(); ++i)
	{
		dp[0][i] = i;
	}
	for (int i = 0; i < word2.length(); ++i)
	{
		for (int j = 0; j < word1.length(); ++j)
		{
			int left{ dp[i + 1][j] + 1 };
			int top{ dp[i][j + 1] + 1 };
			int last{ dp[i][j] };
			if (word1[j] != word2[i])
			{
				++last;
			}
			dp[i + 1][j + 1] = left < top ? left : top;
			dp[i + 1][j + 1] = dp[i + 1][j + 1] < last ? dp[i + 1][j + 1] : last;
		}
	}
	return dp[word2.length()][word1.length()];
}
