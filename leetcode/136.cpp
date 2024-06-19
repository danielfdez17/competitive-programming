class Solution
{
public:
  int singleNumber(vector<int> &nums)
  {
    unordered_set<int> set;
    for (int i : nums)
    {
      if (set.count(i) == 0)
        set.insert(i);
      else
        set.erase(set.find(i));
    }
    return *set.begin();
  }
};