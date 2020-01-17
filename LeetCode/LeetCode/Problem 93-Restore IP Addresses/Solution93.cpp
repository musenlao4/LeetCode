#include "stdafx.h"
#include "Solution93.h"

Solution93::Solution93()
{
}


Solution93::~Solution93()
{
}

void findNext(string &s, int pos, int count, string current, vector<string> &all)
{
	if (count == 3)
	{
		if (s.length() - pos > 3 || s.length() - pos <= 0)
			return;
		if (s.at(pos) == '0' && s.length() - pos > 1)
			return;
		int num{ 0 };
		for (int i = s.length() - 1; i >= pos; --i)
		{
			int temp = (s.at(i) - '0');
			for (int j = 0; j < s.length() - i - 1; ++j)
				temp *= 10;
			num += temp;
		}
		if (num > 255)
			return;
		current += s.substr(pos, s.length() - pos);
		all.emplace_back(current);
		return;
	}
	string temp{""};
	if (pos < s.length())
	{
		 temp = current + s.substr(pos, 1) + string(".");
		 findNext(s, pos + 1, count + 1, temp, all);
		if (s.at(pos) == '0')
			return;
	}
	if (pos + 1 < s.length())
	{
		temp = current + s.substr(pos, 2) + string(".");
		findNext(s, pos + 2, count + 1, temp, all);
	}
	if (pos + 2 < s.length())
	{
		int num{ 0 };
		for (int i = pos + 2; i >= pos; --i)
		{
			int temp = (s.at(i) - '0');
			for (int j = 0; j < pos + 2 - i; ++j)
				temp *= 10;
			num += temp;
		}
		if (num > 255)
			return;
		temp = current + s.substr(pos, 3) + string(".");
		findNext(s, pos + 3, count + 1, temp, all);
	}
}

vector<string> Solution93::restoreIpAddresses(string s)
{
	vector<string> all{};
	findNext(s, 0, 0, "", all);
	return all;
}
