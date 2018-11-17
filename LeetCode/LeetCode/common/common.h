#include<vector>
#include<errno.h>

namespace
{
	template<class T>
	errno_t  FastSortOnce(std::vector<T> &vec, const int &start, const int &end)
	{
		if (start < 0 || end >= vec.size() || start > end)
		{
			return EPERM;
		}

		int left{ start };
		int right{ end };
		bool isRight{ true };
		while (left != right)
		{
			if (vec[right] < vec[left])
			{
				T temp{ vec[left] };
				vec[left] = vec[right];
				vec[right] = temp;
				isRight = !isRight;
			}
			if (isRight)
			{
				--right;
			}
			else
			{
				++left;
			}
		}
		if (start != left)
		{
			FastSortOnce(vec, start, left - 1);
		}
		if (end != right)
		{
			FastSortOnce(vec, right + 1, end);
		}
		return 0;
	}
};

namespace common
{
	template<class T>
	errno_t FastSort(std::vector<T> &vec)
	{
		return FastSortOnce(vec, 0, vec.size() - 1);
	}
};