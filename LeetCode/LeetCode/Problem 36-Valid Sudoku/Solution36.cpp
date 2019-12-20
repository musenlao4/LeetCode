#include "stdafx.h"
#include "Solution36.h"

Solution36::Solution36()
{
}


Solution36::~Solution36()
{
}

bool Solution36::isValidSudoku(vector<vector<char>>& board)
{
	// check all rows
	for (int i = 0; i < 9; ++i)
	{
		if (!isValidSingleRow(board, i))
		{
			return false;
		}
	}
	// check all column
	for (int i = 0; i < 9; ++i)
	{
		if (!isValidSingleColumn(board, i))
		{
			return false;
		}
	}
	// check all rect
	for (int i = 0; i < 9; i += 3)
	{
		for (int j = 0; j < 9; j += 3)
		{
			if (!isValidSingleRect(board, i, j))
			{
				return false;
			}
		}
	}
	return true;
}

bool Solution36::isValidSingleRow(vector<vector<char>>& board, int row)
{
	int lookup[10]{ 0 };
	for (int i = 0; i < 9; ++i)
	{
		if (board[row][i] == '.')
		{
			continue;
		}
		int index{ board[row][i] - '0' };
		if (lookup[index] == 0)
		{
			lookup[index] = 1;
		}
		else
		{
			return false;
		}
	}
	return true;
}

bool Solution36::isValidSingleColumn(vector<vector<char>>& board, int column)
{
	int lookup[10]{ 0 };
	for (int i = 0; i < 9; ++i)
	{
		if (board[i][column] == '.')
		{
			continue;
		}
		int index{ board[i][column] - '0' };
		if (lookup[index] == 0)
		{
			lookup[index] = 1;
		}
		else
		{
			return false;
		}
	}
	return true;
}

bool Solution36::isValidSingleRect(vector<vector<char>>& board, int row, int column)
{
	int lookup[10]{ 0 };
	for (int i = 0; i < 9; ++i)
	{
		int _row{ i / 3 };
		int _column{ i % 3 };
		if (board[row + _row][column + _column] == '.')
		{
			continue;
		}
		int index{ board[row + _row][column + _column] - '0' };
		if (lookup[index] == 0)
		{
			lookup[index] = 1;
		}
		else
		{
			return false;
		}
	}
	return true;
}
