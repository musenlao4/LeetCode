#include<string>
#include<vector>

class Solution17
{
public:
	Solution17();
	~Solution17();

public:
	std::vector<std::string> letterCombinations(std::string digits);
	std::vector<std::string> letterCombinationsEx(std::string digits);

private:
	void find(std::string digits, int pos, std::string current, std::vector<std::string> lookup);

private:
	std::vector<std::string> res;
};
