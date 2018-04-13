#include "stdafx.h"
#include "Solution10.h"

Solution10::Solution10()
{
}


Solution10::~Solution10()
{
}

bool Solution10::Solution(string s, string p)
{
	vector<CharType> vecP = ParseString(p);
	int nStringLength = s.length() + 1;
	int nVectorLength = vecP.size() + 1;
	int *ArraySum = new int[nStringLength * nVectorLength];
	for (int i = 0; i < nStringLength * nVectorLength; ++i)
	{
		ArraySum[i] = 0;
	}
	// 初始化第一行
	for (int i = 1; i < nVectorLength; ++i)
	{
		if (vecP[i - 1].repeate)
			ArraySum[i] = ArraySum[i - 1];
		else
			ArraySum[i] = ArraySum[i - 1] + 1;
	}
	// 初始化第一列
	for (int j = 1; j < nStringLength; ++j)
	{
		ArraySum[j * nVectorLength] = j;
	}

	for (int i = 1; i < nStringLength; ++i)
	{
		for (int j = 1; j < nVectorLength; ++j)
		{
			int nLeft;
			int nTop;
			int nEqual;
			// 获取左上step
			if (s[i - 1] == vecP[j - 1].value || vecP[j - 1].value == '.')
				nEqual = ArraySum[(i - 1)*nVectorLength + (j - 1)];
			else
				nEqual = ArraySum[(i - 1)*nVectorLength + (j - 1)] + 1;
			// 获取左step
			if (vecP[j - 1].repeate)
				nLeft = ArraySum[i * nVectorLength + (j - 1)];
			else
				nLeft = ArraySum[i * nVectorLength + (j - 1)] + 1;
			// 获取顶step
			if ((s[i - 1] == vecP[j - 1].value || vecP[j - 1].value == '.') && vecP[j - 1].repeate)
				nTop = ArraySum[(i - 1) * nVectorLength + j];
			else
				nTop = ArraySum[(i - 1) * nVectorLength + j] + 1;
			// 取最小值
			int nMin = nLeft < nTop ? nLeft : nTop;
			nMin = nMin < nEqual ? nMin : nEqual;
			ArraySum[i * nVectorLength + j] = nMin;
		}
	}
	bool bMatch = ArraySum[nStringLength * nVectorLength - 1] == 0;
	if (ArraySum != NULL)
	{
		delete[] ArraySum;
		ArraySum = NULL;
	}
	return bMatch;
}

vector<CharType> Solution10::ParseString(string p)
{
	vector<CharType> vecTemp;
	for (int i = 0; i < p.length(); ++i)
	{
		CharType temp;
		temp.value = p[i];
		temp.repeate = false;
		if (i + 1 < p.length() &&
			p[i + 1] == '*')
		{
			temp.repeate = true;
			++i;
		}
		vecTemp.push_back(temp);
	}
	return vecTemp;
}