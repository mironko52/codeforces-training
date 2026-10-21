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

        std::string s;
        std::cin >> s;
        int counter = 1;
        int maxCounter = 0;
        for (int i = 1; i < n; i++)
        {
            // if (s[i] == 'R')
            // {
            //     if (s[i - 1] == 'R')
            //     {
            //         counter++;
            //         maxCounter = std::max(counter, maxCounter);
            //     }
            // }
            // else if (s[i] == 'L')
            // {
            //     counter--;
            //     maxCounter = std::max(counter, maxCounter);
            // }
            if (s[i] == 'L')
            {
                answers.push_back(i + 1);
                break;
            }
                }
    }
    for (int i = 0; i < answers.size(); i++)
    {
        std::cout << answers[i] << '\n';
    }
    return 0;
}