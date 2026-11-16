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
    int n;
    std::cin >> n;
    if (n % 3 == 0 || n == 8 || n == 11 || n >= 14) {
        std::cout << "TAK";
    } else {
        std::cout << "NIE";
    }
    return 0;
}