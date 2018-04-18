#include "stdafx.h"
#include "Solution15.h"


Solution15::Solution15()
{
}


Solution15::~Solution15()
{
}

void Solution15::sort(vector<int>& nums)
{
	for (int i = 0; i < nums.size() - 1; ++i)
	{
		for (int j = i + 1; j < nums.size(); ++j)
		{
			if (nums[i] > nums[j])
			{
				int temp = nums[i];
				nums[i] = nums[j];
				nums[j] = temp;
			}
		}
	}
}

vector<vector<int>> Solution15::threeSum(vector<int>& nums)
{
	vector<vector<int>> vecResult;
	if (nums.size() < 3)
		return vecResult;
	sort(nums);
	int nLeft = 0;
	int nRight = nums.size() - 1;
	int nCenter = 0;
	// 一个负数、或0
	while (nLeft < nRight && nums[nLeft] <= 0)
	{
		int nTwoSum = nums[nLeft] + nums[nRight];
		if (nTwoSum > 0)
			--nRight;
		else
		{
			nCenter = nRight - 1;
			while (nCenter > nLeft && nums[nCenter] >=0 && nums[nCenter] + nTwoSum > 0)
				--nCenter;
			if (nCenter > nLeft && nums[nCenter] + nTwoSum == 0)
			{
				vector<int> vec = { nums[nLeft], nums[nCenter], nums[nRight] };
				vecResult.push_back(vec);
			}
			while (nLeft < nRight - 1 && nums[nRight - 1] >= 0 && nums[nRight] == nums[nRight - 1])
				--nRight;
			--nRight;
			if (nLeft >= nRight || nums[nRight] < 0)
			{
				nRight = nums.size() - 1;
				while (nLeft + 1 < nRight && nums[nLeft + 1] <= 0 && nums[nLeft] == nums[nLeft + 1])
					++nLeft;
				++nLeft;
			}
		}
	}
	// 一个正数
	nLeft = 0;
	nRight = nums.size() - 1;
	nCenter = 0;
	while (nLeft < nRight && nums[nRight] > 0)
	{
		int nTwoSum = nums[nLeft] + nums[nRight];
		if (nTwoSum <= 0)
			++nLeft;
		else
		{
			nCenter = nLeft + 1;
			while (nCenter < nRight && nums[nCenter] < 0 && nums[nCenter] + nTwoSum < 0)
				++nCenter;
			if (nCenter < nRight && nums[nCenter] + nTwoSum == 0)
			{
				vector<int> vec = { nums[nLeft], nums[nCenter], nums[nRight] };
				vecResult.push_back(vec);
			}
			while (nLeft + 1 < nRight && nums[nLeft + 1] < 0 && nums[nLeft] == nums[nLeft + 1])
				++nLeft;
			++nLeft;
			if (nLeft >= nRight || nums[nLeft] >= 0)
			{
				nLeft = 0;
				while (nLeft < nRight - 1 && nums[nRight - 1] > 0 && nums[nRight] == nums[nRight - 1])
					--nRight;
				--nRight;
			}
		}
	}

	return vecResult;
}