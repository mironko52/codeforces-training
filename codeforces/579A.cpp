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
    int x;
    std::cin >> x;
    int answer = 0;
    while (x > 0) {
        if (x % 2 == 1) {
            answer++;
            x--;
        }
        x /= 2;
    }
    std::cout << answer;
    return 0;
}