#include "stdafx.h"
#include "Solution43.h"

Solution43::Solution43()
{
}


Solution43::~Solution43()
{
}

string Solution43::multiply(string num1, string num2)
{
	if (num1.compare("0") == 0 || num2.compare("0") == 0)
	{
		return string("0");
	}

	vector<string> singles{};
	for (int i = num2.length() - 1; i >= 0; --i)
	{
		int cur_num2{ num2.at(i) - '0' };
		int carry{ 0 };
		string one{ "" };
		if (cur_num2 == 0)
		{
			one = "0";
		}
		else
		{
			for (int j = num1.length() - 1; j >= 0; --j)
			{
				int cur_num1{ num1.at(j) - '0' };
				int res{ cur_num2 * cur_num1 + carry };
				one = string{ static_cast<char>('0' + res % 10) } + one;
				carry = res / 10;
			}
			if (carry != 0)
			{
				one = string{ static_cast<char>('0' + carry) } +one;
			}
		}
		singles.emplace_back(one);
	}

	int pos{ 0 };
	int carry{ 0 };
	string out{ "" };
	while (true)
	{
		int sum{ 0 };
		bool bValid{ false };
		for (int i = 0; i < singles.size(); ++i)
		{
			int index{ pos - i };
			if (index < 0)
			{
				break;
			}
			if (index >= singles[i].length())
			{
				continue;
			}
			bValid = true;
			sum += (singles[i].at(singles[i].length() - 1 - index) - '0');
		}
		if (!bValid)
		{
			break;
		}
		sum += carry;
		carry = sum / 10;
		out = string{ static_cast<char>('0' + sum % 10) } + out;
		++pos;
	}
	if (carry > 0)
	{
		int sum{ carry };
		carry = sum / 10;
		out = string{ static_cast<char>('0' + sum % 10) } + out;
		if (carry > 0)
		{
			out = string{ static_cast<char>('0' + carry) } +out;
		}
	}
	return out;
}
