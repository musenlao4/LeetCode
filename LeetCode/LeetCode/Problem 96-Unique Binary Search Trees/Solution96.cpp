#include "stdafx.h"
#include "Solution96.h"

Solution96::Solution96()
{
}


Solution96::~Solution96()
{
}

int Solution96::numTrees(int n)
{
	vector<vector<int>> constitutes{ {0}, {1} };
	for (int i = 2; i <= n; i++)
	{
		vector<int> temp(constitutes.back().size() + 1, 0);
		for (int index = 0; index < constitutes.back().size(); ++index)
		{
			for (int count = 0; count <= index + 1; ++count)
			{
				temp[count] += constitutes.back()[index];
			}
		}
		constitutes.emplace_back(temp);
	}
	int sum{ 0 };
	for (auto count : constitutes.back())
	{
		sum += count;
	}
	return sum;
}
