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
        std::vector<int> nums;
        for (int i = 0; i < n; i++) {
            int a;
            std::cin >> a;
            nums.push_back(a);
        }
        if (*std::min_element(nums.begin(), nums.end()) < nums.size()) {
            answers.push_back(nums.size());
        } else {
            answers.push_back(0);
        }
    }

    for (int i = 0; i < answers.size(); i++) {
        std::cout << answers[i] << '\n';
    }

    return 0;
}
