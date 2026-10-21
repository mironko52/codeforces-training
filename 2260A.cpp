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
        int zeros = 0;

        int firstOrLast = 0;
        for (int i = 0; i < n; i++) {
            int a;
            std::cin >> a;
            if (a == 0 && i != 0 && i != n - 1) {
                zeros++;
            }
            if ((i == 0 && a == 1) || i == n - 1 && a == 1) {
                firstOrLast++;
            }
        }
        if (firstOrLast == 0) {
            answers.push_back(0);
        } else if (firstOrLast == 1) {
            if (zeros == 0) {
                answers.push_back(-1);
            } else {
                answers.push_back(1);
            }
        } else {
            if (zeros < 2) {
                answers.push_back(-1);
            } else {
                answers.push_back(2);
            }
        }
    }
    for (int i = 0; i < answers.size(); i++) {
        std::cout << answers[i] << '\n';
    }

    return 0;
}