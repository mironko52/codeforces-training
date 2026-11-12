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
        int a;
        int b;
        int c;
        std::cin >> a;
        std::cin >> b;
        std::cin >> c;
        int counter = 0;
        while (a != b && b != c && c != a) {
            if (std::max(a, std::max(b, c)) == a) {
                a--;
            } else if (std::max(a, std::max(b, c)) == b) {
                b--;
            } else {
                c--;
            }
            if (std::min(a, std::min(b, c)) == a) {
                a++;
            } else if (std::min(a, std::min(b, c)) == b) {
                b++;
            } else {
                c++;
            }
            counter++;
        }
        answers.push_back(counter);
    }
    for (int i = 0; i < answers.size(); i++) {
        std::cout << answers[i] << '\n';
    }
    return 0;
}