#include "stdafx.h"
#include "Solution367.h"

Solution367::Solution367()
{
}


Solution367::~Solution367()
{
}

bool Solution367::isPerfectSquare(int num)
{
	if (num == 0)
	{
		return true;
	}
	long start{ 1 };
	long end{ num };
	while (start <= end)
	{
		long mid{ (start + end) / 2 };
		long multi{ mid * mid };
		if (multi == static_cast<long>(num))
		{
			return true;
		}
		else if (multi > static_cast<long>(num))
		{
			end = mid - 1;
		}
		else
		{
			start = mid + 1;
		}
	}
	return false;
}
