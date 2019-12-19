#pragma  once

class Solution35
{
public:
	Solution35();
	~Solution35();

public:
	int searchInsert(vector<int>& nums, int target);
private:
	int find(vector<int>& nums, const int& target, const int& begin, const int& end);
};
