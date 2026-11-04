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
        int l, r;
        std::cin >> l >> r;
        if ((l > 0 && r > 0) || (l < 0 && r < 0)) {
            answers.push_back(r - l);
        } else if (l == 0 && r > 0) {
            answers.push_back(abs(abs(r) - 1));
        } else if (l < 0 && r == 0) {
            answers.push_back(abs(abs(l) - 1));
        } else if ((l == 0 && r == 0) || (l == -r) || (l == -r + 1)) {
            answers.push_back(0);
        } else if (l < 0 && r > 0) {
            answers.push_back(abs(std::max(abs(l), abs(r)) - abs(std::min(abs(l), abs(r)) + 1)));
        }
    }
    for (int i = 0; i < answers.size(); i++) {
        std::cout << answers[i] << '\n';
    }

    return 0;
}
