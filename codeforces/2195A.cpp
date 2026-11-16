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
    std::vector<std::string> answers;
    while (t--)
    {
        int n;
        std::cin >> n;
        bool one = false;
        bool sixSeven = false;
        for (int i = 0; i < n; i++)
        {
            int k;
            std::cin >> k;
            if (k == 1)
            {
                one = true;
            }
            else if (k == 67)
            {
                sixSeven = true;
            }
        }
        if (sixSeven)
        {
            answers.push_back("YES");
        }
        else
        {
            answers.push_back("NO");
        }
    }
    for (int i = 0; i < answers.size(); i++)
    {
        std::cout << answers[i] << '\n';
    }
    return 0;
}