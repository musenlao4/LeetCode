#include "stdafx.h"
#include "Solution17.h"
#include <map>


Solution17::Solution17()
{
}


Solution17::~Solution17()
{
}

std::vector<std::string> Solution17::letterCombinations(std::string digits)
{
	std::map<char, std::string> mapDigit{};
	mapDigit.emplace('2', "abc");
	mapDigit.emplace('3', "def");
	mapDigit.emplace('4', "ghi");
	mapDigit.emplace('5', "jkl");
	mapDigit.emplace('6', "mno");
	mapDigit.emplace('7', "pqrs");
	mapDigit.emplace('8', "tuv");
	mapDigit.emplace('9', "wxyz");

	std::vector<std::vector<std::string>> digitTree{ std::vector<std::string>{ std::string{ "" } } };
	for (auto digit : digits)
	{
		std::vector<std::string> signalPanel{};
		for (auto letter : mapDigit[digit])
		{
			for (auto prev : digitTree[digitTree.size() - 1])
			{
				signalPanel.emplace_back(prev + std::string{ letter });
			}
		}
		digitTree.emplace_back(signalPanel);
	}
	if (digitTree.size() == 1)
	{
		return std::vector<std::string>{};
	}
	return digitTree[digitTree.size() - 1];
}

std::vector<std::string> Solution17::letterCombinationsEx(std::string digits)
{
	std::vector<std::string> lookup{ "", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz" };
	find(digits, 0, "", lookup);
	return res;
}

void Solution17::find(std::string digits, int pos, std::string current, std::vector<std::string> lookup)
{
	if (pos == digits.length() && pos > 0)
	{
		res.emplace_back(current);
	}
	else if (pos < digits.length())
	{
		for (auto c : lookup[digits[pos] - '0'])
		{
			current += c;
			find(digits, pos + 1, current, lookup);
			current.erase(pos);
		}
	}
}
