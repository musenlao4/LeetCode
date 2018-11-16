#pragma once
class Solution15
{
public:
	Solution15();
	~Solution15();

public:
	struct Key
	{
		int k1;
		int count1;
		int k2;
		int count2;
		Key(int k1_, int count1_, int k2_, int count2_)
			: k1{ k1_ }
			, k2{ k2_ }
			, count1{ count1_ }
			, count2{ count2_ }
		{}
	};
	struct Key_hash
	{
		int operator()(const Key  &key) const noexcept
		{
			return key.k1 + key.k2;
		}
	};
	struct Key_equals
	{
		bool operator()(const Key &key1, const Key &key2) const
		{
			return (key1.k1 == key2.k1 && key1.k2 == key2.k2);
		}
	};
public:
	void sort(vector<int>& nums);
	void Find(map<int, int>::iterator itleft, map<int, int>::iterator itright, set<vector<int>> &res);
	void FindLeft(map<int, int>::iterator itleft, map<int, int>::iterator itright, set<vector<int>> &res);
	void FindRight(map<int, int>::iterator itleft, map<int, int>::iterator itright, set<vector<int>> &res);
	vector<vector<int>> threeSum(vector<int>& nums);
};

