/** 
 * @file Solution_Part01.cpp
 * @brief 避免一部分修改导致编译单元重复编译，将实现文件和头文件分区。
 *        
 * 
 * @date  2022/7/15
 * @author Dtao
 */

#include <leet/Solution.hpp>

using std::vector;

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
}