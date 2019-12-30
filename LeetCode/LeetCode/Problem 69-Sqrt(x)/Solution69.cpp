#include "stdafx.h"
#include "Solution69.h"

Solution69::Solution69()
{
}


Solution69::~Solution69()
{
}

int Solution69::mySqrt(int x)
{
	if (x == 0)
	{
		return 0;
	}
	long start{ 1 };
	long end{ x };
	while (start <= end)
	{
		long mid{ (start + end) / 2 };
		if (mid * mid == x)
		{
			return mid;
		}
		else if (mid * mid > x)
		{
			end = mid - 1;
		}
		else
		{
			start = mid + 1;
		}
	}
	return start - 1;
}
