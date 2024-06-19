#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:

};

int maxProfit(vector<int>&prices) {
  int segment = 0, profit = 0;
  for (int i = 0; i < prices.size() - 1; ++i) {
    if (prices[i - segment] < prices[i + 1]) {
      ++segment;
      profit = max(profit, prices[i + 1] - prices[i - segment + 1]);
    }
    else {
      segment = 0;
    }
  }
  return profit;
}

int main() {
  int length; cin >> length;
  vector<int>v(length);
  for (int&i : v) cin >> i;
  cout << "Max profit: " << maxProfit(v) << "\n";
  return 0;
}