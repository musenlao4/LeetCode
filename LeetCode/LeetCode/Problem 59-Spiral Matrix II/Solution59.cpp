#include "stdafx.h"
#include "Solution59.h"

Solution59::Solution59()
{
}


Solution59::~Solution59()
{
}

vector<vector<int>> Solution59::generateMatrix(int n)
{
	vector<vector<int>> res(n, vector<int>(n, 0));
	int count{ 1 };
	for (int i = 0; i <= (n - 1) / 2; ++i)
	{
		if (i == n - i - 1)
		{
			res[i][i] = count;
			break;
		}
		for (int col = i; col < n - i - 1; ++col)
		{
			res[i][col] = count;
			++count;
		}
		for (int row = i; row < n - i - 1; ++row)
		{
			res[row][n - i - 1] = count;
			++count;
		}
		for (int col = n - i - 1; col > i; --col)
		{
			res[n - i - 1][col] = count;
			++count;
		}
		for (int row = n - i - 1; row > i; --row)
		{
			res[row][i] = count;
			++count;
		}
	}
	return res;
}
