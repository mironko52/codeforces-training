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
        std::string s;
        std::cin >> n;
        std::cin >> s;
        int zeros = 0;
        int ones = 0;
        int answer = n;
        for (int i = 0; i < n; i++) {
            if (s[i] == '0') {
                zeros++;
            }
        }
        if (s[0] == '1') {
            answers.push_back(zeros);
            continue;
        }
        for (int i = 0; i < n; i++) {
            if (s[i] == '1') {
                ones++;
            } else {
                zeros--;
            }
            answer = std::min(answer, ones + zeros);
        }
        answers.push_back(answer);
    }
    for (int i = 0; i < answers.size(); i++) {
        std::cout << answers[i] << '\n';
    }

    return 0;
}