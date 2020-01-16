#include "stdafx.h"
#include "Solution88.h"

Solution88::Solution88()
{
}


Solution88::~Solution88()
{
}

void Solution88::merge(vector<int>& nums1, int m, vector<int>& nums2, int n)
{
	int i{ 0 };
	int j{ 0 };
	vector<int> temps{};
	while (i < m + n)
	{
		int temp{ temps.empty() ? INT_MAX : temps.front() };
		int num1{ i < m ? nums1[i] : INT_MAX };
		int num2{ j < n ? nums2[j] : INT_MAX };
		if (temp < num1 && temp < num2)
		{
			if (i < m)
				temps.emplace_back(num1);
			nums1[i] = temp;
			temps.erase(temps.begin());
		}
		else if (num2 < num1 && num2 <= temp)
		{
			if (i < m)
				temps.emplace_back(num1);
			nums1[i] = num2;
			++j;
		}
		++i;
	}
}
