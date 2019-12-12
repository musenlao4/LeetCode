#pragma once

class Solution30
{
public:
	Solution30();
	~Solution30();

public:
	vector<int> findSubstring(string s, vector<string>& words);

	bool FindedSubstring(string &s, map<string, int> &words, int &beginPos, unsigned int &wordLength);
};
