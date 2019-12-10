#include "stdafx.h"
#include "Solution22.h"

Solution22::Solution22()
{
}


Solution22::~Solution22()
{
}

vector<string> Solution22::generateParenthesis(int n)
{
	vector<vector<string>> allParenthesis{};
	allParenthesis.emplace_back(vector<string>{ "" });

	for (int i = 1; i <= n; ++i)
	{
		allParenthesis.emplace_back();
		for (int j = i - 1; j >= 0; --j)
		{
			for (auto el1 : allParenthesis[j])
			{
				for (auto el2 : allParenthesis[i - j - 1])
				{
					allParenthesis[i].emplace_back("(" + el1 + ")" + el2);
				}
			}
		}
	}
	return allParenthesis.back();
}
