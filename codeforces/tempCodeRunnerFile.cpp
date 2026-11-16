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
        std::vector<int> nums;
        std::vector<int> v1;
        std::vector<int> v2;
        int counter = 2;
        for (int i = 0; i < n; i++) {
            int a;
            std::cin >> a;
            nums.push_back(a);
        }
        std::sort(nums.begin(), nums.end());
        if (n == 1) {
            answers.push_back(1);
            answers.push_back(nums[0]);
        }

        else {
            v1.push_back(nums[0]);
            for (int i = 1; i < n; i++) {
                if (i > 1) {
                    if (nums[i - 2] != nums[i]) {
                        counter++;
                    }
                }
                if (nums[i - 1] == nums[i]) {
                    v2.push_back(nums[i]);
                } else {
                    v1.push_back(nums[i]);
                }
            }
            std::reverse(v1.begin(), v1.end());
            for (int i = 0; i < v1.size(); i++) {
                v2.push_back(v1[i]);
            }
            answers.push_back(counter);
            for (int i = 0; i < v2.size(); i++) {
                answers.push_back(v2[i]);
            }
        }
    }
    for (int i = 0; i < answers.size(); i++) {
        std::cout << answers[i] << '\n';
    }
    return 0;
}