#pragma once
#include "LRUCache.h"
class Solution146
{
public:
	Solution146();
	~Solution146();

public:
	void init(int capacity);
	int get(int key);
	void put(int key, int value);
private:
	LRUCache *m_pLRUCache;
};

