#pragma once

class Solution47
{
public:
	Solution47();
	~Solution47();
public:
	vector<vector<int>> permuteUnique(vector<int>& nums);
private:
	void lookupNext(vector<int>& nums, int start);
private:
	vector<vector<int>> res;
};
