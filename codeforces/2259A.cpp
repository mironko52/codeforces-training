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
        int k;
        std::cin >> n;
        std::cin >> k;
        std::string s;
        std::cin >> s;
        std::vector<int> nums(n / k + 1, 0);
        int counter = 0;
        for (int i = 0; i < n; i++) {
            if (s[i] == '0') {
                nums[i / k] = 1;
            }
        }
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == 0) {
                counter++;
            }
        }
        answers.push_back(counter - 1);
    }
    for (int i = 0; i < answers.size(); i++) {
        std::cout << answers[i] << '\n';
    }

    return 0;
}