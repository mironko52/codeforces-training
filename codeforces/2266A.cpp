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
    std::vector<int> outputs = {};
    for (int i = 0; i < t; i++) {
        int n;
        std::cin >> n;
        int a;
        std::cin >> a;
        int b;
        std::cin >> b;
        int c;
        std::cin >> c;
        int minValue = std::min(a, std::min(b, c));
        outputs.push_back(n - minValue);
    }
    for (int i = 0; i < outputs.size(); i++) {
        std::cout << outputs[i] << '\n';
    }
    return 0;
}