#pragma once
class Solution16
{
public:
	Solution16();
	~Solution16();

	int threeSumClosest(vector<int>& nums, int target);

private:
	int FindClosest(vector<int>& nums, int pos, int target);
};

