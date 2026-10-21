#include <algorithm>
#include <cmath>
#include <iomanip>
#include <iostream>
#include <map>
#include <stack>
#include <string>
#include <unordered_map>
#include <vector>
int main()
{
    int t;
    std::cin >> t;
    std::vector<std::string> answers;
    while (t--)
    {
        int n;
        std::cin >> n;
        std::vector<int> nums;
        for (int i = 0; i < n; i++)
        {
            int a;
            std::cin >> a;
            nums.push_back(a);
        }
        if (nums.size() == 1)
        {
            if (nums[0] == 1)
            {
                answers.push_back("Bessie");
            }
            else
            {
                answers.push_back("Elsie");
            }
        }
        else if (nums[0] == 1 || nums[1] == 1)
        {
            answers.push_back("Bessie");
        }
        else
        {
            answers.push_back("Elsie");
        }
    }
    for (int i = 0; i < answers.size(); i++)
    {
        std::cout << answers[i] << '\n';
    }

    return 0;
}