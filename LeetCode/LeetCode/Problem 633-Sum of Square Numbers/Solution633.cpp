#include "stdafx.h"
#include "Solution633.h"
#include "Problem 367-Valid Perfect Square/Solution367.h"

Solution633::Solution633()
{
}


Solution633::~Solution633()
{
}

bool Solution633::judgeSquareSum(int c)
{
	long count{ 0 };
	long residue{ c };
	Solution367 sln;
	while (count <= residue)
	{
		if (sln.isPerfectSquare(residue))
		{
			return true;
		}
		++count;
		residue = static_cast<long>(c) - count * count;
	}
	return false;
}
