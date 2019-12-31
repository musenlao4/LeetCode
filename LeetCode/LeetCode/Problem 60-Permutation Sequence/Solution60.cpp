#include "stdafx.h"
#include "Solution60.h"

Solution60::Solution60()
{
}


Solution60::~Solution60()
{
}

string Solution60::getPermutation(int n, int k)
{
	int count{ 0 };
	string str{ "" };
	vector<int> vec(n, 0);
	lookupNext(n, k, vec, str, count);
	return str;
}

string Solution60::getPermutationEx(int n, int k)
{
	vector<int> factorials(1, 1);
	for (int i = 1; i < n; ++i)
	{
		int factorial{ 1 };
		for (int j = 1; j <= i; ++j)
		{
			factorial *= j;
		}
		factorials.emplace_back(factorial);
	}
	vector<char> nums{};
	for (int i = 0; i < n; i++)
	{
		nums.emplace_back('1' + i);
	}
	string str{ "" };
	while (k != 0 && !nums.empty())
	{
		auto it{ nums.begin() };
		while (it != nums.end())
		{
			if (k > factorials[n - 1])
			{
				k -= factorials[n - 1];
				++it;
			}
			else
			{
				break;
			}
		}
		if (it == nums.end())
		{
			return "";
		}
		str += *it;
		nums.erase(it);
		--n;
	}
	for (auto c : nums)
	{
		str += c;
	}
	return str;
}

bool Solution60::lookupNext(const int & n, const int & k, vector<int> &vec, string & str, int &count)
{
	for (int i = 0; i < vec.size(); ++i)
	{
		if (vec[i] == 1)
		{
			continue;
		}
		str.push_back('1' + i);
		vec[i] = 1;
		if (str.length() == n)
		{
			++count;
			if (count == k)
			{
				return true;
			}
		}
		else
		{
			if (lookupNext(n, k, vec, str, count))
			{
				return true;
			}
		}
		vec[i] = 0;
		str.pop_back();
	}
	return false;
}
