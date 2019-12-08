#pragma once
class Solution16
{
public:
	Solution16();
	~Solution16();

	int threeSumClosest(vector<int>& nums, int target);

private:
	int op_delta(int my_sum, int target);
};

