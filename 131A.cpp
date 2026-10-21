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
    std::string word;
    std::cin >> word;
    std::string w2 = "";
    bool firstLetter = false;
    bool change = true;
    for (int i = 0; i < word.length(); i++) {
        if (toupper(word[i]) != word[i] && i == 0) {
            firstLetter = true;
        } else if (toupper(word[i]) != word[i]) {
            std::cout << word;
            change = false;
            break;
        }
    }
    if (change == true && firstLetter == true) {
        w2.push_back(toupper(word[0]));
        if (word.length() > 1) {
            for (int i = 1; i < word.length(); i++) {
                w2.push_back(tolower(word[i]));
            }
        }
        std::cout << w2;
    } else if (change == true) {
        if (word.length() > 1) {
            for (int i = 0; i < word.length(); i++) {
                w2.push_back(tolower(word[i]));
            }
        }
        std::cout << w2;
    }
    if (word.length() == 1 && word[0] == toupper(word[0])) {
        word[0] = tolower(word[0]);
        std::cout << word;
    }

    return 0;
}