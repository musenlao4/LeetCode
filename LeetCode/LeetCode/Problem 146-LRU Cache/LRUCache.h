#pragma once

class LRUCache
{
public:
	LRUCache();
	~LRUCache();
	LRUCache(int capacity);
	int get(int key);
	void put(int key, int value);
	void moveToEnd(int key);
	void release();

private:
	int m_nCapacity;
	int m_nSize;
	CacheNode* m_pHead;
	CacheNode* m_pEnd;
	map<int, CacheNode *> m_mapCache;
};
