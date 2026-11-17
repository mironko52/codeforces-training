#include <bits/stdc++.h>

int main() {
    long long n;
    std::cin >> n;
    std::vector<long long> nums;
    long long answer = 0;
    long long maxVal = 0;
    for (int i = 0; i < n; i++) {
        long long a;
        std::cin >> a;
        nums.push_back(a);
    }
    for (long long i = 0; i < n; i++) {
        if (nums[i] < maxVal) {
            answer += maxVal - nums[i];
        }
        maxVal = std::max(maxVal, nums[i]);
    }
    std::cout << answer;
    return 0;
}