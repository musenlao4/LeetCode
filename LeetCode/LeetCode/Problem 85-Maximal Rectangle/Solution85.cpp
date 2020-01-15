#include "stdafx.h"
#include "Solution85.h"

Solution85::Solution85()
{
}


Solution85::~Solution85()
{
}

int Solution85::maximalRectangle(vector<vector<char>>& matrix)
{
	if (matrix.empty() || matrix[0].empty())
		return 0;
	vector<vector<pair<int, int>>> dp(matrix.size(), vector<pair<int, int>>(matrix[0].size(), pair<int, int>(0, 0)));
	int max{ 0 };
	for (int i = 0; i < matrix.size(); ++i)
	{
		for (int j = 0; j < matrix[i].size(); ++j)
		{
			if (matrix[i][j] == '1')
			{
				if (i == 0)
					dp[i][j].first = 1;
				else
					dp[i][j].first = dp[i - 1][j].first + 1;
				if (j == 0)
					dp[i][j].second = 1;
				else
					dp[i][j].second = dp[i][j - 1].second + 1;
				int minWidth{ dp[i][j].second };
				for (int height = 1; height <= dp[i][j].first; height++)
				{
					minWidth = dp[i - height + 1][j].second < minWidth ? dp[i - height + 1][j].second : minWidth;
					int temp{ minWidth * height };
					max = temp > max ? temp : max;
				}
			}
		}
	}
	return max;
}
