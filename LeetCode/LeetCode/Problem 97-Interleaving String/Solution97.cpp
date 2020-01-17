#include "stdafx.h"
#include "Solution97.h"

Solution97::Solution97()
{
}


Solution97::~Solution97()
{
}

bool preproc(string &s1, string &s2, string &s3)
{
	map<char, int> hash1{};
	map<char, int> hash2{};
	for (auto c : s1)
		++hash1[c];
	for (auto c : s2)
		++hash1[c];
	for (auto c : s3)
		++hash2[c];
	if (hash1.size() != hash2.size())
		return false;
	auto it1{ hash1.begin() };
	auto it2{ hash2.begin() };
	while (it1 != hash1.end() && it2 != hash2.end())
	{
		if ((*it1).first == (*it2).first && (*it1).second == (*it2).second)
		{
			++it1;
			++it2;
		}
		else
			return false;
	}
}

bool Solution97::isInterleave(string s1, string s2, string s3)
{
	if (s1.length() + s2.length() != s3.length())
		return false;
	if (!preproc(s1, s2, s3))
		return false;
	vector<vector<vector<bool>>> dp(s1.length(), vector<vector<bool>>(s2.length(), vector<bool>(s3.length(), false)));

	return false;
}
