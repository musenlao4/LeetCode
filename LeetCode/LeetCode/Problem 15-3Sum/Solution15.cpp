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
	while (nRight - nLeft > 1)
	{
		int nTwoSum = nums[nLeft] + nums[nRight];
		int nTripletsSum = nTwoSum;
		if (nTwoSum > 0)
		{
			nCenter = nLeft + 1;
			while (nTripletsSum > 0 && nCenter < nRight)
			{
				nTripletsSum = nTwoSum + nums[nCenter];
				++nCenter;
			}
			if (nTripletsSum == 0)
			{
				vector<int> vec = { nums[nLeft], nums[nCenter - 1], nums[nRight] };
				vecResult.push_back(vec);
			}
			--nRight;
		}
		else if (nTwoSum < 0)
		{
			nCenter = nRight - 1;
			while (nTripletsSum < 0 && nCenter > nLeft)
			{
				nTripletsSum = nTwoSum + nums[nCenter];
				--nCenter;
			}
			if (nTripletsSum == 0)
			{
				vector<int> vec = { nums[nLeft], nums[nCenter + 1], nums[nRight] };
				vecResult.push_back(vec);
			}
			++nLeft;
		}
		else
		{
			nCenter = nLeft + 1;
			while (nums[nCenter] != 0 && nCenter < nRight)
			{
				++nCenter;
			}
			if (nums[nCenter] == 0)
			{
				vector<int> vec = { nums[nLeft], nums[nCenter], nums[nRight] };
				vecResult.push_back(vec);
			}
			while (nums[nLeft + 1] == nums[nLeft] && nLeft + 1 < nRight)
				++nLeft;
			while (nums[nRight - 1] == nums[nRight] && nRight - 1 > nLeft)
				--nRight;
			if (nums[nLeft + 1] + nums[nRight - 1] > 0)
				--nRight;
			else
				++nLeft;
		}
	}
	return vecResult;
}