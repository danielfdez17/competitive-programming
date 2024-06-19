#include <iostream>
using namespace std;

int main()
{
  int cases;
  cin >> cases;
  while (cases--)
  {
    int left, right;
    char aux;
    cin >> left >> aux >> right;
    if ((left < right && left % 2 == 0) || (right < left && right % 2 == 0))
      cout << "SI\n";
    else
      cout << "NO\n";
  }
  return 0;
}