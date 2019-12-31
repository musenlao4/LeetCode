#include "stdafx.h"
#include "Solution77.h"

Solution77::Solution77()
{
}


Solution77::~Solution77()
{
}

vector<vector<int>> Solution77::combine(int n, int k)
{
	if (n < k)
	{
		return res;
	}
	vector<int> vec{};
	lookupNext(vec, n, k, 1);
	return res;
}

void Solution77::lookupNext(vector<int>& vec, const int & n, const int & k, int count)
{
	for (int i = count; i <= n; ++i)
	{
		vec.emplace_back(i);
		if (vec.size() == k)
		{
			res.emplace_back(vec);
		}
		else if (n - i >= k - count)
		{
			lookupNext(vec, n, k, i + 1);
		}
		vec.pop_back();
	}
}
