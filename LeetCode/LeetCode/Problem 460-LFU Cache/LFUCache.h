#pragma once
class LFUCache
{
public:
	LFUCache();
	~LFUCache();
	LFUCache(int capacity);
	int get(int key);
	void put(int key, int value);
	void moveToEnd(int key);
	void release();
	void PrintMap();
public:
	int m_nCapacity;
	int m_nSize;
	CacheNode *m_pHead;
	CacheNode *m_pEnd;
	map<int, CacheNode *> m_mapCache;
	map<int, pair<CacheNode *, CacheNode *>>m_mapQueue;
};
