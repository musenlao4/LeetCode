#include "stdafx.h"
#include "Solution38.h"

Solution38::Solution38()
{
}


Solution38::~Solution38()
{
}

string Solution38::countAndSay(int n)
{
	string next{ "1" };
	for (int i = 1; i < n; ++i)
	{
		string res{ "" };
		char cmp{ 0 };
		int count{ 0 };
		for (auto c : next)
		{
			if (cmp == 0)
			{
				cmp = c;
				count = 1;
			}
			else if (cmp != c)
			{
				res += to_string(count) + string{ cmp };
				cmp = c;
				count = 1;
			}
			else
			{
				++count;
			}
		}
		res += to_string(count) + string{ cmp };
		next = res;
	}
	return next;
}
