#include "stdafx.h"
#include "Solution30.h"

Solution30::Solution30()
{
}


Solution30::~Solution30()
{
}

vector<int> Solution30::findSubstring(string s, vector<string>& words)
{
	vector<int> res{};
	if (s.empty() || words.empty())
	{
		return res;
	}

	vector<int> poses{};
	int word_length = words[0].length();
	for (auto word : words)
	{
		findSignalPos(s, word, poses);
	}

	sort(poses.begin(), poses.end());
	int beginPos{ 0 };
	int endPos{ 0 };
	int lookup{ 0 };
	while (lookup < poses.size() && endPos < s.size())
	{
		if (lookup == 0)
		{
			beginPos = poses[lookup];
			endPos = beginPos + word_length;
			++lookup;
			continue;
		}

		if (endPos < poses[lookup])
		{
			res.emplace_back(beginPos);
			beginPos = poses[lookup];
			endPos = beginPos + word_length;
		}
		else
		{
			endPos = poses[lookup] + word_length;
		}

		++lookup;
	}
	if (res.size() > 0)
	{
		res.emplace_back(beginPos);
	}
	return res;
}

void Solution30::findSignalPos(string s, string word, vector<int>& poses)
{
	int width = s.length();
	int height = word.length();
	vector<vector<int>> blank{};
	blank.resize(height);
	for (auto &signalVec : blank)
	{
		signalVec.resize(width);
	}

	for (int i = 0; i < height; i++)
	{
		for (int j = 0; j < width; j++)
		{
			if (s[j] == word[i])
			{
				if (i - 1 >= 0 && j - 1 >= 0)
				{
					blank[i][j] = blank[i - 1][j - 1] + 1;
				}
				else
				{
					blank[i][j] = 1;
				}
			}
			else
			{
				blank[i][j];
			}
		}
	}

	for (int i = 0; i < width; i++)
	{
		if (blank[height - 1][i] == height)
		{
			poses.emplace_back(i - height + 1);
		}
	}
}
