#pragma once

struct CharType
{
	char value;
	bool repeate;
};

class Solution10
{
public:
	Solution10();
	~Solution10();
public:
	bool Solution(string s, string p);
private:
	vector<CharType> ParseString(string p);
};
