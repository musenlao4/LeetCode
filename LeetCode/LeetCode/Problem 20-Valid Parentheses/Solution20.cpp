#include "stdafx.h"
#include "Solution20.h"

Solution20::Solution20()
{
}


Solution20::~Solution20()
{
}

bool Solution20::isValid(string s)
{
	vector<char> vec{};
	for (auto c : s)
	{
		if (c == '(' || c == '[' || c == '{')
		{
			vec.emplace_back(c);
		}
		else if (c == ')' && pullVectorElem(vec) != '(')
		{
			return false;
		}
		else if (c == ']' && pullVectorElem(vec) != '[')
		{
			return false;
		}
		else if (c == '}' && pullVectorElem(vec) != '{')
		{
			return false;
		}
	}
	return vec.empty() ? true : false;
}

char Solution20::pullVectorElem(vector<char>& vec)
{
	if (vec.empty())
	{
		return 0;
	}
	char last{ *(vec.end() - 1) };
	vec.erase(vec.end() - 1);
	return last;
}
