#pragma once

class Solution46
{
public:
	Solution46();
	~Solution46();

public:
	vector<vector<int>> permute(vector<int>& nums);
private:
	void lookupNext(vector<int>& nums, int start);
private:
	vector<vector<int>> res;
};
