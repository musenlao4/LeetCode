#include "stdafx.h"
#include "Solution73.h"

Solution73::Solution73()
{
}


Solution73::~Solution73()
{
}

void Solution73::setZeroes(vector<vector<int>>& matrix)
{
	if (matrix.empty())
		return;
	vector<bool> row(matrix.size(), false);
	vector<bool> col(matrix[0].size(), false);
	for (int i = 0; i < matrix.size(); ++i)
	{
		for (int j = 0; j < matrix[i].size(); ++j)
		{
			if (matrix[i][j] == 0 && !row[i])
			{
				for (int k = j - 1; k >= 0; --k)
					matrix[i][k] = 0;
				row[i] = true;
			}
			if (matrix[i][j] == 0 && !col[j])
			{
				for (int k = i - 1; k >= 0; --k)
					matrix[k][j] = 0;
				col[j] = true;
			}
			if (row[i] || col[j])
				matrix[i][j] = 0;
		}
	}
}
