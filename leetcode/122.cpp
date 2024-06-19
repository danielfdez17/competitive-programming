#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:

};

// The previos one i wanted to solve it with the solution of this problem

int maxProfit(vector<int>&prices) {
  if (prices.size() == 1) return 0;
  int segment = 0, profit = 0;
  for (int i = 0; i < prices.size() - 1; ++i) {
    if (prices[i] < prices[i + 1]) {
      ++segment;
      // profit = max(profit, prices[i + 1] - prices[i - segment + 1]);
    }
    else {
      profit += prices[i] - prices[i - segment];
      segment = 0;
    }
  }
  if (prices[prices.size() - 2] < prices[prices.size() - 1]) 
    profit += prices[prices.size() - 1] - prices[prices.size() - 1 - segment];
  if (segment + 1 == prices.size()) 
    profit = prices[segment] - prices[0];
  return profit;
}

int main() {
  int length;
  while (cin >> length) {
    vector<int>v(length);
    for (int&i : v) cin >> i;
    cout << "Max profit: " << maxProfit(v) << "\n";
  }
  return 0;
}