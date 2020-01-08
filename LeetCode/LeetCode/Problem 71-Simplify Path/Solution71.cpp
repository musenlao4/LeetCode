#include "stdafx.h"
#include "Solution71.h"

Solution71::Solution71()
{
}


Solution71::~Solution71()
{
}

void checkString(vector<string> &paths, string &current)
{
	if (current.compare("..") == 0 && !paths.empty())
		paths.pop_back();
	else if (!current.empty() && current.compare("..") != 0 && current.compare(".") != 0)
		paths.emplace_back(current);
}

string Solution71::simplifyPath(string path)
{
	vector<string> paths{};
	string current{ "" };
	for (auto c : path)
	{
		if (c == '/')
		{
			checkString(paths, current);
			current = "";
		}
		else
			current += c;
	}
	if (!current.empty())
		checkString(paths, current);
	string res{ "/" };
	for (int i = 0; i < paths.size(); ++i)
	{
		res += paths[i];
		if (i != paths.size() - 1)
			res += '/';
	}
	return res;
}
