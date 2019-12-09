class Solution18
{
public:
	Solution18();
	~Solution18();

public:
	vector<vector<int>> fourSum(vector<int>& nums, int target);

private:
	void find(vector<int> &nums, unsigned int pos, int target, unsigned int count, vector<int> current);

private:
	vector<vector<int>> res;
};
