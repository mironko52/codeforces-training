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
        std::cin >> n;
        std::vector<int> nums;
        for (int i = 0; i < n; i++) {
            int a;
            std::cin >> a;
            nums.push_back(a);
        }
        sort(nums.begin(), nums.end());
        int maxVal = 0;
        char maxIndex = 0;
        int counter = 0;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (i != j && nums[j] % nums[i] == 0) {
                    counter++;
                }
            }
            if (counter > maxVal) {
                maxVal = counter;
                maxIndex = i;
            }
            counter = 0;
        }
        for (int i = 0; i < n; i++) {
            if (nums[i] % nums[maxIndex] != 0) {
                counter++;
            }
        }
        answers.push_back(counter);
    }
    for (int i = 0; i < answers.size(); i++) {
        std::cout << answers[i] << '\n';
    }

    return 0;
}
