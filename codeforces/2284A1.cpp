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
    std::vector<int> answers;
    while (t--) {
        int n;
        std::cin >> n;
        if (n % 2 == 0) {
            answers.push_back(n / 2 * n / 2);
        }
        if (n % 2 == 1) {
            answers.push_back(n / 2 * (n / 2 + 1));
        }
    }
    for (int i = 0; i < answers.size(); i++) {
        std::cout << answers[i] << '\n';
    }
    return 0;
}