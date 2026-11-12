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
        int a, b;
        std::cin >> a >> b;
        if (a >= 2 * b)
        {
            answers.push_back(b);
        }
        else if (a > b)
        {
            answers.push_back(a - b);
        }
        else
        {
            answers.push_back(-1);
        }
    }
    for (int i = 0; i < answers.size(); i++)
    {
        std::cout << answers[i] << '\n';
    }

    return 0;
}