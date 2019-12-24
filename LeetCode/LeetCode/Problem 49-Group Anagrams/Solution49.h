#pragma once
class Solution49
{
public:
	Solution49();
	~Solution49();

public:
	vector<vector<string>> groupAnagrams(vector<string>& strs);

private:
	void sort(string &str, int begin, int end);
	string sortStr(string &str);
};

