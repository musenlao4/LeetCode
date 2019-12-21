#pragma once

class Solution39
{
public:
	Solution39();
	~Solution39();

public:
	vector<vector<int>> combinationSum(vector<int>& candidates, int target);
private:
	void lookup(vector<int>& candidates, vector<vector<int>>& res, vector<int>& one, int begin, int target);
};
