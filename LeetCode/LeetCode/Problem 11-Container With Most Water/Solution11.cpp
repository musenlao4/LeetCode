#include "stdafx.h"
#include "Solution11.h"


Solution11::Solution11()
{
}


Solution11::~Solution11()
{
}

int Solution11::maxArea(vector<int>& height)
{
	map<int, int> mapPoints;

	map<int, int>::iterator it;
	map<int, int>::iterator itCenter;
	// 记录多边形各顶点
	for (int i = 0; i < height.size(); ++i)
	{
		// 记录最右值
		mapPoints[i] = height[i];
		if (i == 0)
		{
			itCenter = mapPoints.end();
			--itCenter;
			continue;
		}
		// 对齐，去除中间不必要的点
		it = mapPoints.end();
		--it;
		while (it != mapPoints.begin())
		{
			--it;
			if (it->first == itCenter->first)
				break;
			if (it->second > height[i])
				break;
			it = mapPoints.erase(it);
		}
		// 记录最大高度索引
		if (height[i] > itCenter->second)
		{
			itCenter = mapPoints.end();
			--itCenter;
		}
	}
	// 计算多边形中最大四边形，从最大高度索引开始
	map<int, int>::iterator itLeft = itCenter;
	map<int, int>::iterator itRight = itCenter;
	int nMaxContainer = 0;
	int nLeft = 0;
	int nLeftIndex = 0;
	int nRight = 0;
	int nRightIndex = 0;

	while (itLeft != mapPoints.begin() || itRight != mapPoints.end())
	{
		nLeft = itLeft->second;
		nLeftIndex = itLeft->first;

		if (itRight != mapPoints.end())
		{
			nRight = itRight->second;
			nRightIndex = itRight->first;
		}
		int nHeight = nLeft < nRight ? nLeft : nRight;
		int nWidth = nRightIndex - nLeftIndex;
		int nContainer = nHeight * nWidth;
		nMaxContainer = nMaxContainer > nContainer ? nMaxContainer : nContainer;

		if (itLeft != mapPoints.begin() && itRight != mapPoints.end())
		{
			--itLeft;
			++itRight;
			if (itLeft->second > itRight->second)
				--itRight;	// 还原右值
			else if (itLeft->second < itRight->second)
				++itLeft;	// 还原左值
		}
		else if (itLeft == mapPoints.begin() && itRight != mapPoints.end())
			++itRight;
		else if (itLeft != mapPoints.begin() && itRight == mapPoints.end())
			--itLeft;
	}
	return nMaxContainer;
}

int Solution11::maxAreaEx(vector<int>& height)
{
	int nLeft = 0;
	int nRight = height.size() - 1;
	int nMaxContainer = 0;
	while (nLeft != nRight)
	{
		int nHeight = height[nLeft] < height[nRight] ? height[nLeft] : height[nRight];
		int nWidth = nRight - nLeft;
		int nContainer = nHeight * nWidth;
		nMaxContainer = nMaxContainer > nContainer ? nMaxContainer : nContainer;
		// 左向右移动
		while (nLeft < nRight && height[nLeft] <= nHeight)
			++nLeft;
		// 右向左移动
		while (nLeft < nRight && height[nRight] <= nHeight)
			--nRight;
	}
	return nMaxContainer;
}