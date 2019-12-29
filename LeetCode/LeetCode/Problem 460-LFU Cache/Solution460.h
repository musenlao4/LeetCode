#pragma once
#include "LFUCache.h"
class Solution460
{
public:
	Solution460();
	~Solution460();

public:
	void operation(vector<string> &commands, vector<vector<int>> &values);
	void init(int capacity);
	int get(int key);
	void put(int key, int value);
	void print();
private:
	LFUCache *m_pLFUCache;
};
