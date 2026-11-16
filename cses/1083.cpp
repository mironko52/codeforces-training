#include <bits/stdc++.h>

int main() {
    int n;
    std::cin >> n;
    std::vector<int> nums;
    for (int i = 0; i < n - 1; i++) {
        int a;
        std::cin >> a;
        nums.push_back(a);
    }
    std::sort(nums.begin(), nums.end());
    for (int i = 0; i < n - 1; i++) {
        if (nums[i] != i + 1) {
            std::cout << i + 1;
        }
    }

    return 0;
}