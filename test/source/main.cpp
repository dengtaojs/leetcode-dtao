#include <leet/Solution.hpp>

#include <iostream>
#include <format>
#include <string>

using std::cout;
using std::cin;
using std::format;
using std::vector;
using leet::Solution;

int main()
{
    vector nums {2, 5, 11, 22, 33, 21};
    Solution s;
Repeat:
    cout << "Enter function inputs(target): ";
    int target {};  cin >> target;
    if(target != 0)
    {
        auto result {s.twoSum(nums, target)};
        cout << format("Result = [{}, {}]", result[0], result[1]) << std::endl;
        goto Repeat;
    }
    else
    {
        goto End;
    }
    
End:
    cout << "Program Finished!" << std::endl;
    return 0;
}
