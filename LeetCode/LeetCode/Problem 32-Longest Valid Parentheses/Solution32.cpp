#include "stdafx.h"
#include "Solution32.h"

Solution32::Solution32()
{
}


Solution32::~Solution32()
{
}

int Solution32::longestValidParentheses(string s)
{
	vector<int> dp{ 0 };
	dp.resize(s.length(), 0);

	vector<int> vec{};
	int longest{ 0 };
	for (int i = 0; i < s.length(); ++i)
	{
		if (s[i] == ')' && !vec.empty())
		{
			int beginPos{ vec.back() };
			int prevLength{ beginPos - 1 >= 0 ? dp[beginPos - 1] : 0 };
			int length{ i - vec.back() + 1 + prevLength };
			dp[i] = length;
			longest = length > longest ? length : longest;
			vec.pop_back();
		}
		else if (s[i] == '(')
		{
			vec.emplace_back( i );
		}
	}
	return longest;
}
