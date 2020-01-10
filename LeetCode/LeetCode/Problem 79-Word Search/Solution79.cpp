#include "stdafx.h"
#include "Solution79.h"

Solution79::Solution79()
{
}


Solution79::~Solution79()
{
}

bool deepSearch(vector<vector<char>>& board, string& word, int index, pair<int, int>& start, vector<vector<int>>& record)
{
	if (index == word.length())
		return true;
	record[start.first][start.second] = 1;
	if (start.second - 1 >= 0
		&& record[start.first][start.second - 1] == 0
		&& word[index] == board[start.first][start.second - 1]
		&& deepSearch(board, word, index + 1, pair<int, int>(start.first, start.second - 1), record))
		return true;
	if (start.first - 1 >= 0 
		&& record[start.first - 1][start.second] == 0
		&& word[index] == board[start.first - 1][start.second]
		&& deepSearch(board, word, index + 1, pair<int, int>(start.first - 1, start.second), record))
		return true;
	if (start.second + 1 < board[0].size()
		&& record[start.first][start.second + 1] == 0
		&& word[index] == board[start.first][start.second + 1]
		&& deepSearch(board, word, index + 1, pair<int, int>(start.first, start.second + 1), record))
		return true;
	if (start.first + 1 < board.size()
		&& record[start.first + 1][start.second] == 0
		&& word[index] == board[start.first + 1][start.second]
		&& deepSearch(board, word, index + 1, pair<int, int>(start.first + 1, start.second), record))
		return true;
	record[start.first][start.second] = 0;
	return false;
}

bool Solution79::exist(vector<vector<char>>& board, string word)
{
	if (word.empty() || board.empty() || board[0].empty())
		return false;
	vector<vector<int>> record{ board.size(), vector<int>(board[0].size(), 0) };
	for (int i = 0; i < board.size(); ++i)
		for (int j = 0; j < board[i].size(); ++j)
			if (board[i][j] == word[0])
				if (word.length() == 1)
					return true;
				else if (deepSearch(board, word, 1, pair<int, int>(i, j), record))
					return true;
	return false;
}
