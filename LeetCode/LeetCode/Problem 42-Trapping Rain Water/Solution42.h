#pragma once

class Solution42
{
public:
	Solution42();
	~Solution42();

public:
	int trap(vector<int>& height);
private:
	int countHeight(vector<int>& height, vector<int>& res, const int& pos, const int& lastHeightest);
};

