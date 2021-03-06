#include <leet/Solution.hpp>
#include <cmath>
#include <sstream>

using std::vector;
using std::string;

namespace leet
{
    auto Solution::twoSum(vector<int>& nums, int target) -> vector<int>
    {
        vector<int> result(2);
        size_t sz {nums.size()};

        for(int i = 0; i != sz; ++i)
        {
            for(int j = i + 1; j != sz; ++j)
            {
                if(nums[i] + nums[j] == target)
                {
                    result[0] = i;
                    result[1] = j;
                    return result;
                }
            }
        }
        return result;
    }

    auto Solution::IsPalindrome(int x) -> bool
    {
        if (x < 0)
            return false;
        else if (x < 10)
            return true;
        int decimalDigits{ static_cast<int>(std::log10(x))};
        int c{ decimalDigits };

        for (int i{}; i < (decimalDigits + 1) / 2; ++i)
        {
            int left_base = static_cast<int>(std::pow(10, c--));
            int left = (x / left_base) % 10;

            int right_base = static_cast<int>(std::pow(10, i + 1));
            int right = (x % right_base) / (right_base / 10);

            if (left != right)
            {
                return false;
            }

        }
        return true;
    }

}