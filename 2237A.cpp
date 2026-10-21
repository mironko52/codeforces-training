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
    std::vector<int> answers;
    while (t--)
    {
        int n;
        std::cin >> n;
        std::vector<int> nums;
        int sum = 0;
        for (int i = 0; i < n; i++)
        {
            int a;
            std::cin >> a;
            nums.push_back(a);
        }
        for (int i = 0; i < n - 1; i++)
        {
            if (nums[i + 1] > nums[i])
            {
                nums[i + 1] = nums[i];
            }
        }
        for (int i = 0; i < n; i++)
        {
            sum += nums[i];
        }
        answers.push_back(sum);
    }
    for (int i = 0; i < answers.size(); i++)
    {
        std::cout << answers[i] << '\n';
    }

    return 0;
}