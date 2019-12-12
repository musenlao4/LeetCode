#pragma once

class Solution28
{
public:
	Solution28();
	~Solution28();

public:
	int strStr(string haystack, string needle);

	int KMP(string haystack, string needle);

private:
	bool compareStr(string str, int n);
};
