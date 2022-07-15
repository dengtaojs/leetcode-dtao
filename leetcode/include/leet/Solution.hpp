#pragma once
#include <vector>

namespace leet
{
    class Solution
    {
    public:
        /**
         * @brief 第1题，两数之和
         *        难度：简单
         *        描述：给定1个整数数组 nums 和一个整数目标值 target，请你在该数中找出
         *        和为目标值 target 的那两个整数，并返回它们的数组下标。
         *        
         *        前置条件：你可以假设每种输入都会对应一个答案。
         *        后置条件：返回的两个索引不会相等。
         * 
         * @param nums 输入的整数数组。
         * @param target 两数之和。
         * @return std::vector<int> 两数之和的索引。 
         */
        auto twoSum(std::vector<int>& nums, int target) -> std::vector<int>;


        /**
         * @brief 第9题，回文数
         *        给你一个整数 x ，如果 x 是一个回文整数，返回 true；否则，返回 false。
         *        回文数是指正序和倒序读都是一样的整数。
         *      
         *        如果 x < 0, x 不是回文数。
         *        如果 x = 0...9， x是回文数。
         *        如果 x = 10..., 需要计算。
         * 
         * @param x 给定的整数。
         * @return true 如果 x 是一个回文数。
         * @return false  如果 x 不是一个回文数。
         */
        auto IsPalindrome(int x) -> bool;
    };
}