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

	template<class T>
	void swap(std::vector<T> &vec, const int &indexA, const int &indexB)
	{
		T temp{ vec[indexA] };
		vec[indexA] = vec[indexB];
		vec[indexB] = temp;
	}

	template<class T>
	void adjust(std::vector<T> &vec, const int &start, const int &end)
	{
		int left{ start * 2 + 1 };
		int right{ start * 2 + 2 };
		if (left >= end)
		{
			return;
		}
		int max{ left };
		if (right < end && vec[left] < vec[right])
		{
			max = right;
		}
		if (vec[start] < vec[max])
		{
			swap(vec, start, max);
			adjust(vec, max, end);
		}
	}

	template<class T>
	void build(std::vector<T> &vec)
	{
		int last{ static_cast<int>(vec.size()) - 1 };
		int parent{ last % 2 == 0 ? last / 2 - 1 : last / 2 };
		for (int i = parent; i >= 0; --i)
		{
			int left{ i * 2 + 1 };
			int right{ i * 2 + 2 };
			int max{ left };
			if (right < vec.size() && vec[left] < vec[right])
			{
				max = right;
			}
			if (vec[i] < vec[max])
			{
				swap(vec, i, max);
				adjust(vec, max, vec.size());
			}
		}
	}

	template<class T>
	errno_t MyHeapSort(std::vector<T> &vec)
	{
		build(vec);
		for (int i = vec.size() - 1; i > 0; --i)
		{
			swap(vec, 0, i);
			adjust(vec, 0, i);
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

	template<class T>
	errno_t HeapSort(std::vector<T> &vec)
	{
		return MyHeapSort(vec);
	}
};