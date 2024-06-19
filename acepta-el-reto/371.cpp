#include <iostream>
using namespace std;

int main()
{
  int n;
  cin >> n;
  while (n != 0)
  {
    if (n == 1)
      cout << "3\n";
    else
    {
      if (n % 2 == 0)
        cout << n * 3 + (n - 1) * 3 << "\n";
      else
        cout << n * 3 + n * 3 << "\n";
    }
    cin >> n;
  }

  return 0;
}