#include "stdafx.h"
#include "Solution48.h"

Solution48::Solution48()
{
}


Solution48::~Solution48()
{
}

void Solution48::rotate(vector<vector<int>>& matrix)
{
	int n{ static_cast<int>(matrix.size()) };
	if (n <= 1)
	{
		return;
	}
	for (int i = 0; i < n / 2; ++i)
	{
		int m{ n - i - 1};
		for (int j = i; j < m; ++j)
		{
			int step{ j - i };
			int temp{ matrix[i][j] };
			matrix[i][j] = matrix[m - step][i];
			matrix[m - step][i] = matrix[m][m - step];
			matrix[m][m - step] = matrix[j][m];
			matrix[j][m] = temp;
		}
	}
}
