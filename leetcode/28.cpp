#include <iostream>
using namespace std;

class Solution
{
public:
};
int strStr(string haystack, string needle)
{
  int res = -1;
  bool exit = false;
  int i, j;
  for (i = 0, j = 0; i < haystack.size() && j < needle.size(); ++i)
  {
    if (haystack[i] == needle[j])
      ++j;
    else if (haystack[i] == needle[0])
      j = 1;
    else
      j = 0;
  }
  if (i < haystack.size() || haystack[i] == needle[j])
    res = i - j;

  return res;
}

int main()
{
  cout << strStr("mississippi", "issip") << "\n";
  return 0;
}