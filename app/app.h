#pragma once

#include <cstddef>

namespace vsite::oop::v6 
{
	template <typename T>
	T minimum(T a, T b)
	{
		return a < b ? a : b;
	}

	template <typename T>
	struct point {};

	template <typename T, unsigned long long siz>
	class fixed_array
	{
	public:
		unsigned long long size()
		{
			return siz;
		}
		T& operator[](int index)
		{
			return m_arr[index];
		}

	private:
		T m_arr[siz];
	};



}