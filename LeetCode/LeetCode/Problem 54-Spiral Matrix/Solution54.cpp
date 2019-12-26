#include "stdafx.h"
#include "Solution54.h"

Solution54::Solution54()
{
}

Solution54::~Solution54()
{
}

vector<int> Solution54::spiralOrder(vector<vector<int>>& matrix)
{
	vector<int> res{};
	while (matrix.size() > 0)
	{
		for (auto elem : matrix[0])
		{
			res.emplace_back(elem);
		}
		matrix.erase(matrix.begin());

		for (auto it = matrix.begin(); it != matrix.end();)
		{
			res.emplace_back(it->back());
			it->erase(it->end() - 1);
			if (it->size() == 0)
			{
				it = matrix.erase(it);
			}
			else
			{
				++it;
			}
		}

		if (matrix.size() > 0)
		{
			auto it_end{ matrix.end() - 1 };
			for (auto it = it_end->rbegin(); it != it_end->rend(); ++it)
			{
				res.emplace_back(*it);
			}
			matrix.erase(it_end);
		}

		if (matrix.size() > 0)
		{
			for (auto it = matrix.rbegin(); it != matrix.rend();)
			{
				res.emplace_back(it->front());
				it->erase(it->begin());
				if (it->size() == 0)
				{
					it = vector<vector<int>>::reverse_iterator(matrix.erase((++it).base()));
				}
				else
				{
					++it;
				}
			}
		}
	}
	return res;
}

