#pragma once

class Solution34
{
public:
	Solution34();
	~Solution34();
public:
	vector<int> searchRange(vector<int>& nums, int target);
private:
	int find(vector<int>& nums, const int& target, const int& begin, const int& end);
};
