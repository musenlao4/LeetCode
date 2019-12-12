#pragma once

class Solution30
{
public:
	Solution30();
	~Solution30();

public:
	vector<int> findSubstring(string s, vector<string>& words);
private:
	void findSignalPos(string s, string word, vector<int> &poses);
};
