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
    std::vector<bool> answers;
    while (t--) {
        int n;
        int m;
        std::cin >> n;
        std::cin >> m;
        std::vector<char> words;
        std::vector<std::string> abbrevations;
        bool answer = true;
        for (int i = 0; i < n; i++) {
            std::string word;
            std::cin >> word;
            words.push_back(toupper(word[0]));
        }
        for (int i = 0; i < m; i++) {
            std::string abbrevation;
            std::cin >> abbrevation;
            abbrevations.push_back(abbrevation);
        }
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < abbrevations[i].length(); j++) {
                if (find(words.begin(), words.end(), abbrevations[i][j]) == words.end()) {
                    answer = false;
                }
            }
        }
        answers.push_back(answer);
    }
    for (int i = 0; i < answers.size(); i++) {
        if (answers[i] == false) {
            std::cout << "NO" << '\n';
        } else {
            std::cout << "YES" << '\n';
        }
    }
    return 0;
}