#pragma once

class Solution416
{
public:
	Solution416();
	~Solution416();
public:
	bool canPartition(vector<int>& nums);
private:
	bool canReachTarget(vector<int> &nums, int index, int &target);
};
