#include "stdafx.h"
#include "Solution12.h"


Solution12::Solution12()
{
}


Solution12::~Solution12()
{
}

string Solution12::intToRoman(int num)
{
	int nKilobit = num / 1000;
	num = num % 1000;
	int nHundred = num / 100;
	num = num % 100;
	int nDecade = num / 10;
	num = num % 10;
	int nUnit = num;

	// 千位
	string strRoman = "";
	for (int i = 0; i < nKilobit; ++i)
		strRoman += "M";
	// 百位
	if (nHundred == 9)
	{
		strRoman += "CM";
	}
	else if (nHundred == 4)
	{
		strRoman += "CD";
	}
	else if (nHundred >= 5)
	{
		strRoman += "D";
		for (int i = 5; i < nHundred; ++i)
			strRoman += "C";
	}
	else
	{
		for (int i = 0; i < nHundred; ++i)
			strRoman += "C";
	}
	// 十位
	if (nDecade == 9)
	{
		strRoman += "XC";
	}
	else if (nDecade == 4)
	{
		strRoman += "XL";
	}
	else if (nDecade >= 5)
	{
		strRoman += "L";
		for (int i = 5; i < nDecade; ++i)
			strRoman += "X";
	}
	else
	{
		for (int i = 0; i < nDecade; ++i)
			strRoman += "X";
	}
	// 个位
	if (nUnit == 9)
	{
		strRoman += "IX";
	}
	else if (nUnit == 4)
	{
		strRoman += "IV";
	}
	else if (nUnit >= 5)
	{
		strRoman += "V";
		for (int i = 5; i < nUnit; ++i)
			strRoman += "I";
	}
	else
	{
		for (int i = 0; i < nUnit; ++i)
			strRoman += "I";
	}
	return strRoman;
}
string Solution12::intToRomanEx(int num)
{
	static string M[] = { "", "M", "MM", "MMM" };
	static string C[] = { "", "C", "CC", "CCC", "CD", "D", "DC", "DCC", "DCCC", "CM" };
	static string X[] = { "", "X", "XX", "XXX", "XL", "L", "LX", "LXX", "LXXX", "XC" };
	static string I[] = { "", "I", "II", "III", "IV", "V", "VI", "VII", "VIII", "IX" };
	return M[num / 1000] + C[(num % 1000) / 100] + X[(num % 100) / 10] + I[(num % 10)];
}