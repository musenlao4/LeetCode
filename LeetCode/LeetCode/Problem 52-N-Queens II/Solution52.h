#pragma once

class Solution52
{
public:
	Solution52();
	~Solution52();

public:
	int totalNQueens(int n);

private:
	void findNext(const int& n, const int& index);
	void fillIndex(const int& n, const int& index, const int& pos);
	void revertIndex(const int& n, const int& index, const int& pos);
private:
	vector<int> lookup;
	vector<int> pos;
	int m_count;
};
