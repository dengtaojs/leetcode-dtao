#pragma once

#include <vector>
#include <string>
#include <sstream>

namespace tools
{
	template<class T>
	auto FormatVector(const std::vector<T> values, int maxCount = 20)
	{
		std::stringstream ss;
		ss << "[ ";
		int count{};

		for (const T& value : values)
		{
			ss << value;
			if (++count != maxCount)
				ss << ", ";
			else
				ss << " ]";
		}
		return ss.str();
	}
}