#pragma once

class Solution37
{
public:
	Solution37();
	~Solution37();
public:
	void solveSudoku(vector<vector<char>>& board);
private:
	vector<char> findRemain(vector<vector<char>>& board, const int& x, const int& y);
	void sortMap(map<pair<int, int>, vector<char>> &map);
	bool supposeOne(vector<vector<char>>& board, map<pair<int, int>, vector<char>>& lookup, int index);
	bool isValid(vector<vector<char>>& board, int x, int y, char value);
	void printBoard(vector<vector<char>>& board, int x, int y);
};
