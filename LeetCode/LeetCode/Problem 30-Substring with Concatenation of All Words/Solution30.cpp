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
	
	unsigned int wordLength{ words[0].length() };
	unsigned int sumLength{ wordLength * words.size() };

	if (sumLength > s.length())
	{
		return res;
	}

	map<string, int> ExWords{};
	for (auto word : words)
	{
		if (ExWords.find(word) != ExWords.end())
		{
			ExWords[word]++;
		}
		else
		{
			ExWords[word] = 1;
		}
	}

	for (int i = 0; i < wordLength; ++i)
	{
		int beginPos{ i };
		int pos{ beginPos };
		while (beginPos + sumLength - 1 < s.length())
		{
			map<string, int> backup{ ExWords };
			if (FindedSubstring(s, backup, pos, wordLength))
			{
				res.emplace_back(beginPos);
			}

			pos = beginPos + wordLength;
			beginPos = pos;
		}
	}
	return res;
}

bool Solution30::FindedSubstring(string &s, map<string, int>& words, int &beginPos, unsigned int &wordLength)
{
	if (words.empty())
	{
		return true;
	}
	if (beginPos + wordLength > s.length())
	{
		return false;
	}
	string subString{ s.substr(beginPos, wordLength) };
	auto it{ words.find(subString) };
	if (it == words.end())
	{
		return false;
	}
	if (it->second == 1)
	{
		words.erase(it);
	}
	else
	{
		it->second--;
	}
	beginPos += wordLength;
	return FindedSubstring(s, words, beginPos, wordLength);
}
