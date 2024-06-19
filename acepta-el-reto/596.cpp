#include <iostream>
#include <string>
using namespace std;

int main()
{
  while (true)
  {
    string input, output = "";
    if (!getline(cin, input)) break;
    for (int i = 0; i < input.length() - 1; ++i)
    {
      if (input[i] == '.' && input[i + 1] == '.' && input[i - 1] != '.')
        output += input[i - 1];
    }
    output += '\n';
    cout << output;
  }
  return 0;
}