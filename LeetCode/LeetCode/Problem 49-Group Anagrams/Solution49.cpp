#include "stdafx.h"
#include "Solution49.h"

Solution49::Solution49()
{
}


Solution49::~Solution49()
{
}

vector<vector<string>> Solution49::groupAnagrams(vector<string>& strs)
{
	vector<vector<string>> res{};
	map<string, int> strIndex{};
	for (auto str : strs)
	{
		// string temp{ str };
		// sort(temp, 0, temp.size() - 1);
		string temp{ sortStr(str) };
		if (strIndex.find(temp) != strIndex.end())
		{
			int index{ strIndex.at(temp) };
			res[index].emplace_back(str);
		}
		else
		{
			vector<string> group{ str };
			res.emplace_back(group);
			int index{ static_cast<int>(res.size()) - 1 };
			strIndex.emplace(temp, index);
		}
	}
	return res;
}

void Solution49::sort(string &str, int begin, int end)
{
	if (begin == end)
	{
		return;
	}
	int left{ begin };
	int right{ end };
	bool isRight{ true };
	while (left < right)
	{
		if (str.at(left) > str.at(right))
		{
			char c{ str.at(left) };
			str[left] = str[right];
			str[right] = c;
			isRight = !isRight;
		}
		if (isRight)
		{
			--right;
		}
		else
		{
			++left;
		}
	}
	if (left - 1 > begin)
	{
		sort(str, begin, left - 1);
	}
	if (left + 1 < end)
	{
		sort(str, left + 1, end);
	}
}

string Solution49::sortStr(string &str)
{
	vector<int> hash(26, 0);
	for (auto c : str)
	{
		++(hash[c - 'a']);
	}
	string out{ "" };
	for (int i = 0; i < hash.size(); ++i)
	{
		for (int j = 0; j < hash[i]; ++j)
		{
			out += ('a' + i);
		}
	}
	return out;
}
