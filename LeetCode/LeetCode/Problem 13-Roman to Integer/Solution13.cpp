#include "stdafx.h"
#include "Solution13.h"


Solution13::Solution13()
{
}


Solution13::~Solution13()
{
}
/*
I             1
V             5
X             10
L             50
C             100
D             500
M             1000
*/
int Solution13::romanToInt(string s)
{
	map<char, int> map;
	map['I'] = 1;
	map['V'] = 5;
	map['X'] = 10;
	map['L'] = 50;
	map['C'] = 100;
	map['D'] = 500;
	map['M'] = 1000;

	int nTemp = 0;
	int nResult = 0;
	for (int i = s.length() - 1; i >= 0; --i)
	{
		if (map[s[i]] >= nTemp)
		{
			nResult += map[s[i]];
			nTemp = map[s[i]];
		}
		else
		{
			nResult -= map[s[i]];
			nTemp = 0;
		}
	}
	return nResult;
}