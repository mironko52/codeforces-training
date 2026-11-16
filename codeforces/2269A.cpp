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
int main() {
    int t;
    std::cin >> t;
    std::vector<int> answers;
    while (t--) {
        int n;
        int k;
        std::cin >> n;
        std::cin >> k;
        int result = 0;
        if (n - k != 0) {
            result = 2 * k - 2 + pow(2, n - k + 1);
        } else {
            result = 2 * k;
        }

        answers.push_back(result);
    }
    for (int i = 0; i < answers.size(); i++) {
        std::cout << answers[i] << '\n';
    }
    return 0;
}