#include "stdafx.h"
#include "Solution37.h"

Solution37::Solution37()
{
}


Solution37::~Solution37()
{
}

typedef pair<pair<int, int>, vector<char>> PAIR;
struct cmp
{
	bool operator()(const PAIR& p1, const PAIR& p2)
	{
		return p1.second.size() < p2.second.size();
	}
};

void Solution37::solveSudoku(vector<vector<char>>& board)
{
	printBoard(board, 0, 0);
	map<pair<int, int>, vector<char>> lookup{};
	vector<pair<int, int>> oneMatch{};
	// step1
	for (int y = 0; y < board.size(); ++y)
	{
		for (int x = 0; x < board[y].size(); ++x)
		{
			if (board[y][x] == '.')
			{
				vector<char> res{ findRemain(board, x, y) };
				if (res.size() == 1)
				{
					board[y][x] = res[0];
					oneMatch.emplace_back(pair<int, int>(x, y));
					printBoard(board, x, y);
				}
				else
				{
					lookup.emplace(pair<int, int>(x, y), res);
				}
			}
		}
	}
	// sortMap(lookup);

	// step2
	while (oneMatch.size() != 0 && lookup.size() > 0)
	{
		oneMatch.clear();
		for (auto it = lookup.begin(); it != lookup.end();)
		{
			int x{ it->first.first };
			int y{ it->first.second };
			it->second = findRemain(board, x, y);
			if (it->second.size() == 1)
			{
				board[y][x] = it->second[0];
				oneMatch.emplace_back(pair<int, int>(x, y));
				it = lookup.erase(it);
				printBoard(board, x, y);
			}
			else
			{
				lookup.emplace(pair<int, int>(x, y), it->second);
				++it;
			}
		}
		// sortMap(lookup);
	}
	if (lookup.size() == 0)
	{
		printf("good.\n");
		return;
	}
	// step3
	if (supposeOne(board, lookup, 0))
	{
		printf("good.\n");
	}
	else
	{
		printf("bad.\n");
	}
}

vector<char> Solution37::findRemain(vector<vector<char>>& board, const int& x, const int& y)
{
	vector<int> hash(9, 0);
	for (int i = 0; i < board.size(); ++i)
	{
		if (i == x)
		{
			continue;
		}
		if (board[y][i] != '.')
		{
			++(hash[board[y][i] - '1']);
		}
	}
	for (int i = 0; i < board.size(); ++i)
	{
		if (i == y)
		{
			continue;
		}
		if (board[i][x] != '.')
		{
			++(hash[board[i][x] - '1']);
		}
	}

	int x_begin{ x - x % 3 };
	int y_begin{ y - y % 3 };
	for (int i = y_begin; i < y_begin + 3; ++i)
	{
		for (int j = x_begin; j < x_begin + 3; ++j)
		{
			if (i == y && j == x)
			{
				continue;
			}
			if (board[i][j] != '.')
			{
				++(hash[board[i][j] - '1']);
			}
		}
	}

	vector<char> res{};
	for (int i = 0; i < hash.size(); ++i)
	{
		if (hash[i] == 0)
		{
			res.emplace_back('1' + i);
		}
	}
	return res;
}

void Solution37::sortMap(map<pair<int, int>, vector<char>>& map)
{
	vector<PAIR> vt(map.begin(), map.end());
	sort(vt.begin(), vt.end(), cmp());
}

bool Solution37::supposeOne(vector<vector<char>>& board, map<pair<int, int>, vector<char>>& lookup, int index)
{
	auto it{ lookup.begin() };
	for (int i = 0; i < index; i++)
	{
		++it;
		if (it == lookup.end())
		{
			return true;
		}
	}

	for (auto c : it->second)
	{
		if (isValid(board, it->first.first, it->first.second, c))
		{
			board[it->first.second][it->first.first] = c;
			printBoard(board, it->first.first, it->first.second);
			if (supposeOne(board, lookup, index + 1))
			{
				return true;
			}
			else
			{
				board[it->first.second][it->first.first] = '.';
				printBoard(board, it->first.first, it->first.second);
			}
		}
	}
	return false;
}

bool Solution37::isValid(vector<vector<char>>& board, int x, int y, char value)
{
	for (int i = 0; i < board.size(); ++i)
	{
		if (i == x || board[y][i] == '.')
		{
			continue;
		}
		if (board[y][i] == value)
		{
			return false;
		}
	}
	for (int i = 0; i < board.size(); ++i)
	{
		if (i == y || board[i][x] == '.')
		{
			continue;
		}
		if (board[i][x] == value)
		{
			return false;
		}
	}

	int x_begin{ x - x % 3 };
	int y_begin{ y - y % 3 };
	for (int i = y_begin; i < y_begin + 3; ++i)
	{
		for (int j = x_begin; j < x_begin + 3; ++j)
		{
			if ((i == y && j == x) || board[i][j] == '.')
			{
				continue;
			}
			if (board[i][j] == value)
			{
				return false;
			}
		}
	}
	return true;
}

void Solution37::printBoard(vector<vector<char>>& board, int x, int y)
{
	printf("x : %d y : %d\n", x, y);
	for (int y = 0; y < board.size(); ++y)
	{
		for (int x = 0; x < board[y].size(); ++x)
		{
			printf("%c ", board[y][x]);
		}
		printf("\n");
	}
	printf("------------------------------------\n");
}
