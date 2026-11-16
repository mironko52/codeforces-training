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
    std::vector<int> answers;

    int t;
    std::cin >> t;
    while (t--) {
        std::vector<int> odd;
        std::vector<int> even;
        std::vector<int> even2;
        int n;
        std::cin >> n;
        for (int i = 0; i < n; i++) {
            int m;
            std::cin >> m;
            if (m % 2 == 1) {
                odd.push_back(m);
            } else if (m % 4 == 0) {
                even.push_back(m);
            } else {
                even2.push_back(m);
            }
        }

        answers.push_back(std::max({odd.size(), even.size(), even2.size()}));
    }

    for (int i = 0; i < answers.size(); i++) {
        std::cout << answers[i] << '\n';
    }
    return 0;
}