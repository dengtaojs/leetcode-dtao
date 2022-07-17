#include "Solution_test.hpp"
#include "tools.hpp"

#include <leet/Solution.hpp>
#include <iostream>
#include <format>
#include <string>


using std::vector;
using std::cout;
using std::cin;
using std::format;
using leet::Solution;

auto test::testTwoSum(vector<int>& nums) -> void
{
    Solution s;
    cout << "nums = " << tools::FormatVector(nums, nums.size()) << std::endl;
Repeat:
    cout << "Enter function inputs(target): ";
    int target{};  cin >> target;
    if (target != 0)
    {
        auto result{ s.twoSum(nums, target) };
        cout << format("Result = [{}, {}]", result[0], result[1]) << std::endl;
        goto Repeat;
    }
    else
    {
        goto End;
    }
End:
    cout << "Test Finished!" << std::endl;
}


auto test::testIsPalindrome() -> void
{
    Solution s;
    cout << "Enter the function: " << __func__ << std::endl;
Repeat:
    cout << "Enter a int number: ";
    int x{}; cin >> x;
    if (x != 0)
    {
        bool result{ s.IsPalindrome(x) };
        cout << format("{} is {}a Palindrome Number.", x, result ? "" : "not ") << std::endl;
        goto Repeat;
    }
    else
    {
        goto End;
    }
End:
    cout << "Test Finished!" << std::endl;
}

auto test::testIsMatch() -> void
{
    Solution solution;
    cout << "Enter the function: " << __func__ << std::endl;
Repeat:
    cout << "Enter a input string: ";
    std::string input; std::getline(cin, input);
    if (input == "quit"){
        goto End;
    }
    else{
        cout << "Enter a pattern string: ";
        std::string pattern; std::getline(cin, pattern);
        if(pattern == "quit"){
            goto End;
        }

        bool result = solution.isMath(input, pattern);
        cout << format("Result = {}", result ? "True" : "False") << std::endl;
        cout << std::endl;
        goto Repeat;
    }
End:
    cout << "Test Finished!" << std::endl;
}