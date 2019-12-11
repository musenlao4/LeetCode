#pragma once

// using bit opertion
namespace MathOperation
{
	inline int add(int a, int b)
	{
		if (b == 0)
		{
			return a;
		}
		int sum = a ^ b;
		int carry = (a & b) << 1;
		return add(sum, carry);
	}

	inline int subtract(int a, int b)
	{
		int subtractor = add(~b, 1);
		return add(a, subtractor);
	}

	// -n = ~(n - 1) = ~n + 1
	// fetching last 1: n&~(n-1) or n&(-n)
	// remove last 1: n&(n - 1)
	// etc: 11110 * 010100 = (11110 * 10000 + 11110 * 100)
	inline int multiply(int a, int b)
	{
		bool neg{ b < 0 };
		if (b < 0)
			b = -b;

		int sum{ 0 };
		while (b > 0)
		{
			if (b & 1)
			{
				sum = add(sum, a);
			}
			a = a << 1;
			b = b >> 1;
		}

		if (neg)
			sum = -sum;
		return sum;
	}

	inline int divide(int a, int b)
	{
		long long dividend = static_cast<long long>(a);
		long long divisor = static_cast<long long>(b);
		long long quotient{ 0 };

		bool negative = (dividend < 0) ^ (divisor < 0);
		dividend = abs(dividend);
		divisor = abs(divisor);

		const int N_BITS{ sizeof(int) * 8 };
		for (int i = N_BITS - 1; i >= 0; --i)
		{
			if ((dividend >> i) >= divisor)
			{
				quotient += (1LL << i);
				dividend -= (divisor << i);
			}
		}

		quotient = negative ? -1 * quotient : quotient;

		// check for overflow
		if (quotient > numeric_limits<int>::max())
		{
			quotient = numeric_limits<int>::max();
		}

		return static_cast<int>(quotient);
	}
}