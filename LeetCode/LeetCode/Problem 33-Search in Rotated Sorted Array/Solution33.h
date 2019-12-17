#pragma once

class Solution33
{
public:
	Solution33();
	~Solution33();
public:
	int search(vector<int>& nums, int target);
private:
	int find(vector<int>& nums, const int &target, const int &begin, const int &end);
};
