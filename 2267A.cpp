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
        std::cin >> n;
        char c;
        std::cin >> c;
        std::string s;
        std::cin >> s;
        int counter = 0;
        for (int i = 0; i < n / 2; i++) {
            if (s[i] != s[n - i - 1] && (s[i] == c || s[n - i - 1] == c)) {
                counter++;
            } else if (s[i] != s[n - i - 1] && s[i] != c && s[n - i - 1] != c) {
                counter += 2;
            }
        }
        answers.push_back(counter);
    }
    for (int i = 0; i < answers.size(); i++) {
        std::cout << answers[i] << '\n';
    }

    return 0;
}