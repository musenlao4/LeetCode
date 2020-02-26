#include "stdafx.h"
#include "Solution5316.h"

Solution5316::Solution5316()
{
}


Solution5316::~Solution5316()
{
}

vector<string> Solution5316::printVertically(string s)
{
	vector<string> words{};
	string word{ "" };
	int maxLength{ 0 };
	for (auto c : s)
	{
		if (c != ' ')
			word += c;
		else if (!word.empty())
		{
			words.emplace_back(word);
			maxLength = word.length() > maxLength ? word.length() : maxLength;
			word.clear();
		}
	}
	if (!word.empty())
	{
		words.emplace_back(word);
		maxLength = word.length() > maxLength ? word.length() : maxLength;
		word.clear();
	}
	vector<string> res(maxLength, "");
	for (int i = 0; i < maxLength; ++i)
	{
		for (int j = 0; j < words.size(); ++j)
		{
			if (i < words[j].length())
				res[i] += words[j].at(i);
			else
				res[i] += ' ';
		}
		for (int j = res[i].length() - 1; j >= 0; --j)
		{
			if (res[i].at(j) == ' ')
				res[i].pop_back();
			else
				break;
		}
	}
	return res;
}
