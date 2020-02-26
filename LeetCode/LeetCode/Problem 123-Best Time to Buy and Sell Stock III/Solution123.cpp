#include "stdafx.h"
#include "Solution123.h"



Solution123::Solution123()
{
}


Solution123::~Solution123()
{
}

int Solution123::maxProfit(vector<int>& prices)
{
	if (prices.empty())
		return 0;
	map<int, int> flags{};
	int lastPrice{ prices[0] };
	int flag{ 0 };
	int minPrice{ lastPrice };
	int maxDiff{ 0 };
	int max{ 0 };
	for (int i = 1; i < prices.size(); ++i)
	{
		if (prices[i] < lastPrice)
		{
			if (lastPrice > prices[flag])
			{
				int diff{ lastPrice - minPrice };
				maxDiff = diff > maxDiff ? diff : maxDiff;
				flags[i] = maxDiff;
				for (auto it : flags)
				{
					int value{ 0 };
					if (it.first == i)
						value = it.second;
					else
						value = it.second + lastPrice - prices[it.first];
					max = value > max ? value : max;
				}
			}
			else if (!flags.empty())
			{
				auto it = flags.end();
				--it;
				int value = it->second;
				flags.erase(it);
				flags[i] = value;
			}
			minPrice = prices[i] < minPrice ? prices[i] : minPrice;
			flag = i;
		}
		lastPrice = prices[i];
	}
	if (lastPrice > prices[flag])
	{
		flags[prices.size() - 1] = lastPrice - minPrice;
		for (auto it : flags)
		{
			int value{ 0 };
			if (it.first == prices.size() - 1)
				value = it.second;
			else
				value = it.second + lastPrice - prices[it.first];
			max = value > max ? value : max;
		}
	}
	return max;
}
