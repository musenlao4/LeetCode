#include "stdafx.h"
#include "Solution67.h"

Solution67::Solution67()
{
}


Solution67::~Solution67()
{
}

string Solution67::addBinary(string a, string b)
{
	int a_length{ static_cast<int>(a.length()) };
	int b_length{ static_cast<int>(b.length()) };
	int length{ a_length > b_length ? a_length + 1 : b_length + 1 };
	for (int i = 0; i < length - a_length; ++i)
		a = "0" + a;
	for (int i = 0; i < length - b_length; ++i)
		b = "0" + b;
	bool next{ true };
	while (next)
	{
		next = false;
		for (int i = 0; i < length; i++)
		{
			if (a[i] == '1' && b[i] == '1')
			{
				a[i] = '0';
				b[i - 1] = '1';
				b[i] = '0';
				next = true;
			}
			else if (a[i] != b[i])
			{
				a[i] = '1';
				b[i] = '0';
			}
		}
	}
	if (a[0] == '0')
		a.erase(a.begin());
	return a;
}
