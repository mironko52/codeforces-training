#include <iostream>
#include <vector>
#include <cmath>

int main()
{
    int t;
    std::cin >> t;

    std::vector<bool> answers(t, true);

    for (int j = 0; j < t; j++)
    {
        int n;
        std::cin >> n;

        for (int i = 2; i * i <= n + 1; i++)
        {
            if ((n + 1) % i == 0)
            {
                answers[j] = false;
                break;
            }
        }
    }

    for (int i = 0; i < t; i++)
    {
        if (answers[i])
        {
            std::cout << "YES\n";
        }
        else
        {
            std::cout << "NO\n";
        }
    }

    return 0;
}