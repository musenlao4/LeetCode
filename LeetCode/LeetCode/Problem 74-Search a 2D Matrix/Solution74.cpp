#include "stdafx.h"
#include "Solution74.h"

Solution74::Solution74()
{
}


Solution74::~Solution74()
{
}

bool Solution74::searchMatrix(vector<vector<int>>& matrix, int target)
{
	if (matrix.empty() || matrix[0].empty())
		return false;
	int m{ static_cast<int>(matrix.size()) };
	int n{ static_cast<int>(matrix[0].size()) };
	int begin{ 0 };
	int end{ m * n - 1 };
	while (begin <= end)
	{
		int mid{ (end + begin) / 2 };
		int x{ mid % n };
		int y{ mid / n };
		if (matrix[y][x] == target)
			return true;
		else if (matrix[y][x] > target)
			end = mid - 1;
		else
			begin = mid + 1;
	}
	return false;
}
