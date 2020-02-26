#include "stdafx.h"
#include "Solution5169.h"

Solution5169::Solution5169()
{
}


Solution5169::~Solution5169()
{
}

int mon[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
bool checkLeaf(int year)
{
	return year % 400 == 0 || (year % 100 != 0 && year % 4 == 0);
}
int subtractDate(vector<int> &date, int year)
{
	int days{ 0 };
	for (int i = year; i < date[0]; ++i)
	{
		if (checkLeaf(i))
			days += 366;
		else
			days += 365;
	}
	for (int i = 1; i < date[1]; ++i)
	{
		days += mon[i - 1];
		if (i == 2 && checkLeaf(date[0]))
			++days;
	}
	days += date[2];
	return days;
}

vector<int> parseDate(string date)
{
	vector<int> vec{};
	vec.emplace_back(stof(date.substr(0, 4).c_str()));
	vec.emplace_back(stof(date.substr(5, 2).c_str()));
	vec.emplace_back(stof(date.substr(8, 2).c_str()));
	return vec;
}

int Solution5169::daysBetweenDates(string date1, string date2)
{
	vector<int> vec1{ parseDate(date1) };
	vector<int> vec2{ parseDate(date2) };
	int year{};
	if (vec1[0] < vec2[0])
		year = vec1[0];
	else
		year = vec2[0];
	int days1{ subtractDate(vec1, year) };
	int days2{ subtractDate(vec2, year) };
	return abs(days1 - days2);
}
