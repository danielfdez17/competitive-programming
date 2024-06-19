class Solution
{
public:
  bool canConstruct(string ransomNote, string magazine)
  {
    unordered_map<char, int> magazineMap;
    int size = magazine.size();
    for (int i = 0; i < size; ++i)
    {
      char c = magazine[i];
      auto it = magazineMap.find(c);
      if (it == magazineMap.end())
      {
        magazineMap.insert({c, 1});
      }
      else
      {
        it->second += 1;
      }
    }
    bool canCons = true;
    for (int i = 0; i < ransomNote.size() && canCons; ++i)
    {
      char c = ransomNote[i];
      auto it = magazineMap.find(c);
      if (it != magazineMap.end() && it->second > 0)
      {
        it->second -= 1;
        --size;
      }
      else
      {
        canCons = false;
      }
    }
    return canCons;
  }
};