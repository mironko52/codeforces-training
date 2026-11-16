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
    std::vector<std::string> answers;
    while (t--) {
        int a, b, c;
        std::cin >> a >> b >> c;

        if ((b == a + 1 && c == b + 1) || (c == a + 1 && b == c + 1) || (a == b + 1 && c == a + 1) ||
            (c == b + 1 && a == c + 1) || (b == c + 1 && a == b + 1) || (a == c + 1 && b == a + 1)) {
            answers.push_back("YES");
        } else {
            answers.push_back("NO");
        }
    }
    for (int i = 0; i < answers.size(); i++) {
        std::cout << answers[i] << '\n';
    }
    return 0;
}