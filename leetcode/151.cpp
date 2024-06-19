#include <iostream>
using namespace std;

class Solution
{
public:
};
string reverseWords(string s)
{
  string res = "", word = "";
  for (char c : s)
  {
    if (c == ' ')
    {
      if (word == "")
        continue;
      if (res != "")
        res = word + c + res;
      else
        res = word;
      word = "";
    }
    else
    {
      word += c;
    }
  }
  
  if (word != "")
    if (res != "")
      res = word + ' ' + res;
    else
      res = word;
  return res;
}

int main()
{
  string input;
  cout << reverseWords(input) << "\n";
  return 0;
}