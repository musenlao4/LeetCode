#pragma once

class Solution36
{
public:
	Solution36();
	~Solution36();

public:
	bool isValidSudoku(vector<vector<char>>& board);

private:
	bool isValidSingleRow(vector<vector<char>>& board, int row);
	bool isValidSingleColumn(vector<vector<char>>& board, int column);
	bool isValidSingleRect(vector<vector<char>>& board, int row, int column);
};

