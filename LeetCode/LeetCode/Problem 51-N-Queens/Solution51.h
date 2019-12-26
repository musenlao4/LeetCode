#pragma once
class Solution51
{
public:
	Solution51();
	~Solution51();
public:
	vector<vector<string>> solveNQueens(int n);
private:
	void findNext(const int& n, const int& index);
	void fillIndex(const int& n, const int& index, const int& pos);
	void revertIndex(const int& n, const int& index, const int& pos);
	void insertRes(const int& n);

	void printLookup();
private:
	vector<int> lookup;
	vector<int> pos;
	vector<vector<string>> res;
};
