#include "stdafx.h"
#include "Solution66.h"

Solution66::Solution66()
{
}


Solution66::~Solution66()
{
}

vector<int> Solution66::plusOne(vector<int>& digits)
{
	int add{ 1 };
	for (auto it = digits.end() - 1; it != digits.begin(); --it)
	{
		*it += add;
		if (*it == 10)
		{
			*it = 0;
		}
		else
		{
			add = 0;
			break;
		}
	}
	digits[0] += add;
	if (digits[0] == 10)
	{
		digits[0] = 0;
		digits.insert(digits.begin(), 1);
	}
	return digits;
}
