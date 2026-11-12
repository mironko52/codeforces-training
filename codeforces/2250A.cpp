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
int main()
{
  int t;
  std::cin >> t;
  std::vector<std::string> answers;
  while (t--)
  {
    int n;
    std::cin >> n;
    std::vector<int> nums;
    bool possible = true;
    for (int i = 0; i < n; i++)
    {
      int w;
      std::cin >> w;
      nums.push_back(w);
    }
    if (n % 2 == 1)
    {
      answers.push_back("NO");
      possible = false;

      continue;
    }
    int upper = nums[0];
    int lower = nums[1];

    for (int i = 0; i < n; i += 2)
    {
      upper = std::min(upper, nums[i]);
      lower = std::max(lower, nums[i + 1]);
      if (upper - lower < 2)
      {
        answers.push_back("NO");
        possible = false;
        break;
      }
    }
    if (possible == true)
    {
      answers.push_back("YES");
    }
  }
  for (int i = 0; i < answers.size(); i++)
  {
    std::cout << answers[i] << '\n';
  }
  return 0;
}