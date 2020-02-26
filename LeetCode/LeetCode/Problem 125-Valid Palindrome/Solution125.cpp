#include "stdafx.h"
#include "Solution125.h"

Solution125::Solution125()
{
}


Solution125::~Solution125()
{
}

bool Solution125::isPalindrome(string s)
{
	if (s.empty())
		return true;
	int left{ 0 };
	int right{ static_cast<int>(s.size()) - 1 };
	while (left < right)
	{
		if (s[left] >= 'A' && s[left] <= 'Z')
			s[left] += 32;
		if ((s[left] < 'a' || s[left] > 'z') && (s[left] < '0' || s[left] > '9'))
		{
			++left;
			continue;
		}
		if (s[right] >= 'A' && s[right] <= 'Z')
			s[right] += 32;
		if ((s[right] < 'a' || s[right] > 'z') && (s[right] < '0' || s[right] > '9'))
		{
			--right;
			continue;
		}
		if (s[left] != s[right])
			return false;
		++left;
		--right;
	}
	return true;
}
