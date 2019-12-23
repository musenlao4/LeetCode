#include "stdafx.h"
#include "Solution44.h"

Solution44::Solution44()
{
}


Solution44::~Solution44()
{
}

bool Solution44::isMatch(string s, string p)
{
	if (s.empty() && p.empty())
	{
		return true;
	}
	if (!s.empty() && p.empty())
	{
		return false;
	}
	vector<vector<int>> blank{};
	blank.resize(p.length() + 1);
	for (int i = 0; i <= p.length(); i++)
	{
		blank[i].resize(s.length() + 1, 0);
	}
	int i{ 0 };
	int j{ 0 };
	bool bStar{ false };
	while (i < p.length() && j < s.length())
	{
		bool firstMatch{ false };
		if (p.at(i) == '*')
		{
			if (bStar)
			{
				blank[i + 1][j + 1] = blank[i][j + 1];
			}
			else
			{
				blank[i + 1][j + 1] = blank[i][j] + 1;
			}
			for (int k = j + 1; k < s.length(); ++k)
			{
				blank[i + 1][k + 1] = blank[i + 1][k] + 1;
			}
			firstMatch = true;
			bStar = true;
		}
		else
		{
			for (int k = j; k < s.length(); ++k)
			{
				if (p.at(i) == '?' || p.at(i) == s.at(k))
				{
					if (k == 0)
					{
						blank[i + 1][k + 1] = 1;
						firstMatch = true;
						++j;
					}
					else if (blank[i][k] != 0)
					{
						blank[i + 1][k + 1] = blank[i][k] + 1;
						if (!firstMatch)
						{
							firstMatch = true;
							j = k + 1;
						}
					}
					else if (bStar)
					{
						blank[i + 1][k + 1] = blank[i][k + 1];
						firstMatch = true;
						++j;
					}
				}
			}
			bStar = false;
		}
		if (!firstMatch)
		{
			return false;
		}
		++i;
	}

	if (i < p.length())
	{
		for (int k = i; k < p.length(); ++k)
		{
			if (p.at(k) != '*')
			{
				return false;
			}
		}
		return true;
	}
	else
	{
		return blank[p.length()][s.length()] == s.length();
	}
}
