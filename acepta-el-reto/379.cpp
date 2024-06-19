#include <iostream>
#include <vector>
using namespace std;

int main()
{
  int n;
  cin >> n;
  while (n != 0)
  {
    vector<int> v(n, 0);
    int pos = -1;
    for (int i = 0; i < n; i++)
    {
      cin >> v[i];
      if (i > 0 && v[i - 1] == v[i])
        pos = i;
    }

    if (pos != -1)
      v[pos]++;
    else
      v[0]++;

    // int i = n - 1;
    // while (i > 0)
    // {
    //   if (v[i - 1] == v[i])
    //   {
    //     v[i]++;
    //     break;
    //   }
    // }

    for (int &i : v)
      cout << i << " ";
    cout << "\n";
    cin >> n;
  }

  return 0;
}