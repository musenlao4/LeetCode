#include "stdafx.h"
#include "Solution14.h"


Solution14::Solution14()
{
}


Solution14::~Solution14()
{
}

string Solution14::longestCommonPrefix(vector<string>& strs)
{
	string strResult = "";
	int nCount = 0;
	if (strs.size() == 0)
		return strResult;
	char nTemp = 0;
	bool bStopSearch = false;
	while (!bStopSearch)
	{
		if (strs[0].length() <= nCount)
			break;
		for (int i = 1; i < strs.size(); ++i)
		{
			if (strs[i].length() <= nCount ||
				strs[i][nCount] != strs[0][nCount])
			{
				bStopSearch = true;
				break;
			}
		}
		if (bStopSearch)
			break;
		strResult += strs[0][nCount];
		++nCount;
	}
	return strResult;
}