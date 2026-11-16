#include <algorithm>
#include <cmath>
#include <iomanip>
#include <iostream>
#include <map>
#include <stack>
#include <string>
#include <unordered_map>
#include <vector>
// 4 7 47 74 444 447 477 777 774 744
int main() {
    int n;
    std::cin >> n;
    if (n == 4 || n == 7 || n == 47 || n == 74 || n == 444 || n == 447 || n == 477 || n == 777 || n == 774 ||
        n == 744) {
        std::cout << "YES";
    } else if (double(n) / 4 == n / 4 || double(n) / 7 == n / 7 || double(n) / 47 == n / 47 ||
               double(n) / 74 == n / 74 || double(n) / 444 == n / 444 || double(n) / 447 == n / 447 ||
               double(n) / 477 == n / 477 || double(n) / 777 == n / 777 || double(n) / 774 == n / 774 ||
               double(n) / 744 == n / 744) {
        std::cout << "YES";
    } else {
        std::cout << "NO";
    }
    return 0;
}