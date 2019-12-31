#include "stdafx.h"
#include "Solution58.h"

Solution58::Solution58()
{
}


Solution58::~Solution58()
{
}

int Solution58::lengthOfLastWord(string s)
{
	if (s.length() == 0)
	{
		return 0;
	}
	int count{ 0 };
	for (int i = s.length() - 1; i >= 0; --i)
	{
		if (s[i] == ' ')
		{
			if (count == 0)
			{
				continue;
			}
			else
			{
				break;
			}
		}
		++count;
	}
	return count;
}
