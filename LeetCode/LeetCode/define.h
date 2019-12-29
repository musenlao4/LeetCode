#pragma once

struct ListNode {
	int val;
	ListNode *next;
	ListNode(int x) : val(x), next(NULL) {}
};

struct TreeNode {
	int val;
	TreeNode *left;
	TreeNode *right;
	TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

struct CacheNode {
	int k;
	int val;
	int count;
	CacheNode *parent;
	CacheNode *next;
	CacheNode(int key, int value) : k{ key }, val{ value }, count{ 1 }, parent{ NULL }, next{ NULL }{}
};