
class Solution94
{
public:
	struct TreeNode {
		int val;
		TreeNode *left;
		TreeNode *right;
		TreeNode(int x) : val(x), left(NULL), right(NULL) {}
	};
public:
	Solution94();
	~Solution94();
public:
	vector<int> inorderTraversal(TreeNode* root);
};
