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
