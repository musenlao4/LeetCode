#pragma once

class Solution31
{
public:
	Solution31();
	~Solution31();

public:
	void nextPermutation(vector<int>& nums);
private:
	void reserve(vector<int>& nums, int begin, int end);
	int findLastGeater(vector<int>& nums, int sentry, int begin, int end);
};
