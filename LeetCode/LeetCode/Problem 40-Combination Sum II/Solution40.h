#pragma once

class Solution40
{
public:
	Solution40();
	~Solution40();

public:
	vector<vector<int>> combinationSum2(vector<int>& candidates, int target);
private:
	void lookup(vector<int>& candidates, int target, int begin);
private:
	vector<vector<int>> m_res;
	vector<int> m_one;
};
