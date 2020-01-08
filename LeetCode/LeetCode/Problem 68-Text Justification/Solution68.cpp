#include "stdafx.h"
#include "Solution68.h"

Solution68::Solution68()
{
}


Solution68::~Solution68()
{
}

vector<string> Solution68::fullJustify(vector<string>& words, int maxWidth)
{
	vector<string> res{};
	int begin{ 0 };
	int end{ 0 };
	int currentLength{ 0 };
	int wordLength{ 0 };
	for (auto word : words)
	{
		int length = currentLength == 0 ? currentLength : currentLength + 1;
		if (length + word.length() > maxWidth)
		{
			--end;
			int wordCount{ end - begin };
			int blankCount{ maxWidth - wordLength };
			if (wordCount == 0)
			{
				string str{ words[begin] };
				for (int i = 0; i < blankCount; ++i)
					str += ' ';
				res.emplace_back(str);
			}
			else
			{
				string str{ "" };
				string blank{ "" };
				int NormalBlankNum{ blankCount / wordCount };
				int AddCount{ blankCount % wordCount };
				for (int i = 0; i < NormalBlankNum; ++i)
					blank += ' ';
				for (int i = begin; i <= end; ++i)
				{
					str += words[i];
					if (i == end)
					{
						break;
					}
					str += blank;
					if (AddCount > 0)
					{
						str += ' ';
						--AddCount;
					}
				}
				res.emplace_back(str);
			}
			++end;
			begin = end;
			++end;
			currentLength = word.length();
			wordLength = word.length();
		}
		else
		{
			currentLength = length + word.length();
			wordLength += word.length();
			++end;
		}
	}
	if (currentLength == 0)
		return res;
	string str{ "" };
	for (int i = begin; i < end; ++i)
		if (i == end - 1)
			str += words[i];
		else
			str += words[i] + ' ';
	int remainBlankCount{ maxWidth - static_cast<int>(str.length()) };
	for (int i = 0; i < remainBlankCount; ++i)
		str += ' ';
	res.emplace_back(str);
	return res;
}
