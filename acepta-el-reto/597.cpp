#include <iostream>
#include <vector>
using namespace std;

int main()
{
  int cases;
  cin >> cases;
  while (cases--)
  {
    int n, prev = 0, curr, res = 0;
    cin >> n;
    vector<int> v(n);
    for (int &i : v)
      cin >> i;
    for (int i = 0; i < n - 1; ++i)
    {
      if (v[i] > v[i + 1])
        ++res;
    }
    cout << res << "\n";
  }
  return 0;
}