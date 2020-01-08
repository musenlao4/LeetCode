#include "stdafx.h"
#include "Solution65.h"

Solution65::Solution65()
{
}


Solution65::~Solution65()
{
}

enum STATUS
{
	START = 0,
	SIGN,
	EXPONENT,
	NUMBER,
	POINT,
	BLANK,
	ERROR = 100,
};
STATUS validStart(char c)
{
	if (c == ' ')
		return START;
	if (c >= '0' && c <= '9')
		return NUMBER;
	if (c == '+' || c == '-')
		return SIGN;
	if (c == '.')
		return POINT;
	return ERROR;
}
STATUS validSign(char c, bool canPoint)
{
	if (c >= '0' && c <= '9')
		return NUMBER;
	if (canPoint && c == '.')
		return POINT;
	return ERROR;
}
STATUS validExponent(char c)
{
	if (c >= '0' && c <= '9')
		return NUMBER;
	if (c == '+' || c == '-')
		return SIGN;
	return ERROR;
}
STATUS validNumber(char c, bool canPoint, bool canExp)
{
	if (c >= '0' && c <= '9')
		return NUMBER;
	if (c == 'e' && canExp)
		return EXPONENT;
	if (c == ' ')
		return BLANK;
	if (c == '.' && canPoint)
	{
		return POINT;
	}
	return ERROR;
}
STATUS validPoint(char c, bool haveNumber, bool canExp)
{
	if (c >= '0' && c <= '9')
		return NUMBER;
	if (haveNumber && c == ' ')
		return BLANK;
	if (haveNumber && canExp && c == 'e')
		return EXPONENT;
	return ERROR;
}
STATUS validBlank(char c)
{
	if (c == ' ')
		return BLANK;
	return ERROR;
}
bool Solution65::isNumber(string s)
{
	STATUS status{ START };
	bool canPoint{ true };
	bool haveNumber{ false };
	bool canExp{ true };
	for (auto c : s)
	{
		switch (status)
		{
		case START:
			status = validStart(c);
			break;
		case SIGN:
			status = validSign(c, canPoint);
			break;
		case EXPONENT:
			canPoint = false;
			canExp = false;
			status = validExponent(c);
			break;
		case NUMBER:
			haveNumber = true;
			status = validNumber(c, canPoint, canExp);
			break;
		case POINT:
			canPoint = false;
			status = validPoint(c, haveNumber, canExp);
			break;
		case BLANK:
			status = validBlank(c);
			break;
		default:
			break;
		}
		if (status == ERROR)
			return false;
	}
	if (status != NUMBER && status != BLANK && (!haveNumber || status != POINT))
		return false;
	return true;
}
