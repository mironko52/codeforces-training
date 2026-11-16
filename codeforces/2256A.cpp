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
    std::vector<int> values;
    while (t--) {
        int a;
        int b;
        int c;
        std::cin >> a;
        std::cin >> b;
        std::cin >> c;
        int result = 0;
        if (std::max(a, std::max(b, c)) == a) {
            if (b + c < a) {
                a = b + c;
            }
            if (b > c) {
                result = a - c;
            } else {
                result = a - b;
            }
        } else if (std::max(a, std::max(b, c)) == b) {
            if (a + c < b) {
                b = a + c;
            }
            if (a > c) {
                result = b - c;
            } else {
                result = b - a;
            }
        } else {
            if (b + a < c) {
                c = a + b;
            }
            if (a > b) {
                result = c - b;
            } else {
                result = c - a;
            }
        }
        values.push_back(result);
    }
    for (int i = 0; i < values.size(); i++) {
        std::cout << values[i] << '\n';
    }
    return 0;
}