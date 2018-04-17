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
	int nTotal = 0;
	for (int i = 0; i < height.size(); ++i)
	{
		int nMaxI = 0;
		for (int j = 0; j < i; ++j)
		{
			int nAi = height[i];
			int nAj = height[j];

			int nHeight = nAi < nAj ? nAi : nAj;
			int nWidth = i - j;
			int nTemp = nHeight * nWidth;
			nMaxI = nMaxI > nTemp ? nMaxI : nTemp;
		}
		nTotal = nTotal > nMaxI ? nTotal : nMaxI;
	}
	return nTotal;
}