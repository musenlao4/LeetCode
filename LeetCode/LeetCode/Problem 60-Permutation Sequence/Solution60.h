#pragma once

class Solution60
{
public:
	Solution60();
	~Solution60();
public:
	string getPermutation(int n, int k);
private:
	bool lookupNext(const int &n, const int &k, vector<int> &vec, string& str, int &count);
};
