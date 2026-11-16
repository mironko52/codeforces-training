#include <algorithm>
#include <cmath>
#include <iomanip>
#include <iostream>
#include <map>
#include <stack>
#include <string>
#include <unordered_map>
#include <vector>

int main() {
    int t;
    std::cin >> t;

    std::vector<int> answers = {};

    for (int i = 0; i < t; i++) {
        int n;
        std::cin >> n;

        char c;
        std::cin >> c;

        std::string s;
        std::cin >> s;

        int maxVal = 0;
        std::string s2 = s + s;

        int lastG = -1;

        if (c == 'g') {
            answers.push_back(0);
            continue;
        }

        for (int j = 2 * n - 1; j >= 0; j--) {
            if (s2[j] == 'g') {
                lastG = j;
            }
            if (s2[j] == c && lastG != -1) {
                maxVal = std::max(maxVal, lastG - j);
            }
        }

        answers.push_back(maxVal);
    }

    for (int i = 0; i < answers.size(); i++) {
        std::cout << answers[i] << '\n';
    }

    return 0;
}