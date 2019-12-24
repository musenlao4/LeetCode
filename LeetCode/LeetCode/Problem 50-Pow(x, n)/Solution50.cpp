#include "stdafx.h"
#include "Solution50.h"

Solution50::Solution50()
{
}


Solution50::~Solution50()
{
}

double Solution50::myPow(double x, int n)
{
	long long y{ n };
	if (y == 0)
	{
		return 1.0;
	}
	if (y < 0)
	{
		y = -y;
		x = 1 / x;
	}

	double res{ 1 };
	while (y > 0)
	{
		double pow{ x };
		long long count{ 1 };
		while (y - count * 2 > 0)
		{
			pow *= pow;
			count = count << 1;
		}
		res *= pow;
		y -= count;
	}
	return res;
}
