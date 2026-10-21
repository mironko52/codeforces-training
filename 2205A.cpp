#include <algorithm>
#include <cctype>
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
        int maxVal = 0;
        int counter = 0;
        for (int i = 0; i < n; i++)
        {
            int k;
            std::cin >> k;
            if (maxVal <= k)
            {
                counter++;
                maxVal = k;
            }
        }

        answers.push_back(counter);
    }
    for (int i = 0; i < answers.size(); i++)
    {
        std::cout << answers[i] << '\n';
    }
    return 0;
}