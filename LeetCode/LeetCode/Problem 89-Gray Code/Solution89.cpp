#include "stdafx.h"
#include "Solution89.h"

Solution89::Solution89()
{
}


Solution89::~Solution89()
{
}

void generateGrayCode(vector<int> &codes, unsigned int &num, int n)
{
	if (n == 0)
	{
		codes.emplace_back(num);
		unsigned int b = static_cast<unsigned int>(1);
		unsigned int temp = ~num;
		num = ~(temp ^ b);
		codes.emplace_back(num);
		return;
	}
	generateGrayCode(codes, num, n - 1);
	unsigned int b = static_cast<unsigned int>(1) << n;
	unsigned int temp = ~num;
	num = ~(temp ^ b);
	generateGrayCode(codes, num, n - 1);
}

vector<int> Solution89::grayCode(int n)
{
	if (n == 0)
		return vector<int>{ 0 };
	vector<int> codes{};
	unsigned int num{ 0 };
	generateGrayCode(codes, num, n - 1);
	return codes;
}
