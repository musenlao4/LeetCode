#include "stdafx.h"
#include "Solution5315.h"

Solution5315::Solution5315()
{
}


Solution5315::~Solution5315()
{
}

int Solution5315::maximum69Number(int num)
{
	int newNum{ 0 };
	bool isChanged{ false };
	for (int i = 4; i >= 0; --i)
	{
		int temp{ static_cast<int>(num / (pow(10, i))) };
		if (temp == 0)
			continue;
		if (!isChanged && temp == 6)
		{
			newNum += 9 * pow(10, i);
			isChanged = true;
		}
		else
			newNum += temp * pow(10, i);
		num -= temp * pow(10, i);
	}
	return newNum;
}
