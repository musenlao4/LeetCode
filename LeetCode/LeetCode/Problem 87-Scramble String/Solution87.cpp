#include "stdafx.h"
#include "Solution87.h"

Solution87::Solution87()
{
}


Solution87::~Solution87()
{
}

bool EqualString(string s1, string s2)
{
	if (s1.length() == 1)
		if (s1[0] == s2[0])
			return true;
		else
			return false;
	map<char, int> hash1{};
	map<char, int> hash2{};
	for (auto c : s1)
		++hash1[c];
	for (auto c : s2)
		++hash2[c];
	auto it1 = hash1.begin();
	auto it2 = hash2.begin();
	for (; it1 != hash1.end() && it2 != hash2.end();)
	{
		if ((*it1).first != (*it2).first || (*it1).second != (*it2).second)
			return false;
		++it1;
		++it2;
	}
	for (int i = 1; i < s1.length(); ++i)
	{
		if (EqualString(s1.substr(0, i), s2.substr(0, i))
			&& EqualString(s1.substr(i, s1.length() - i), s2.substr(i, s2.length() - i)))
			return true;
		if (EqualString(s1.substr(0, i), s2.substr(s2.length() - i, i))
			&& EqualString(s1.substr(i, s1.length() - i), s2.substr(0, s2.length() - i)))
			return true;
	}
	return false;
}

bool Solution87::isScramble(string s1, string s2)
{
	if (s1.length() != s2.length())
		return false;
	return EqualString(s1, s2);
}
