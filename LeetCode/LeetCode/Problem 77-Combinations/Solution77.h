#pragma once
class Solution77
{
public:
	Solution77();
	~Solution77();
public:
	vector<vector<int>> combine(int n, int k);
private:
	void lookupNext(vector<int> &vec, const int& n, const int& k, int count);
private:
	vector<vector<int>> res{};
};

