#include <iostream>
using namespace std;

struct ListNode
{
  int val;
  ListNode *next;
  ListNode() : val(0), next(nullptr) {}
  ListNode(int x) : val(x), next(nullptr) {}
  ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution
{
public:
  ListNode *mergeTwoLists(ListNode *list1, ListNode *list2)
  {
    ListNode *newList = new ListNode();
    ListNode * itNL = newList;
    ListNode *it1 = list1, *it2 = list2;
    ListNode *prev1 = nullptr, *prev2 = nullptr;
    while (it1 != nullptr && it2 != nullptr)
    {
      if (it1->val == it2->val)
      {
        itNL->next = new ListNode(it1->val);
        itNL = itNL->next;
        itNL->next = new ListNode(it2->val);
        itNL = itNL->next;
        it1 = it1->next;
        it2 = it2->next;
      }
      else if (it1->val < it2->val)
      {
        itNL->next = new ListNode(it1->val);
        itNL = itNL->next;
        it1 = it1->next;
      }
      else
      {
        itNL->next = new ListNode(it2->val);
        itNL = itNL->next;
        it2 = it2->next;
      }
    }
    while (it1 != nullptr)
    {
      itNL->next = new ListNode(it1->val);
      itNL = itNL->next;
      it1 = it1->next;
    }
    while (it2 != nullptr)
    {
      itNL->next = new ListNode(it2->val);
      itNL = itNL->next;
      it2 = it2->next;
    }
    newList = newList->next;
    return newList;
  }
};

void show(ListNode *list)
{
  ListNode *it = list;
  while (it != nullptr)
  {
    cout << it->val << " ";
    it = it->next;
  }
  cout << "\n";
}

int main() {

  ListNode *list1 = new ListNode(1, new ListNode(2, new ListNode(4)));
  ListNode *list2 = new ListNode(1, new ListNode(3, new ListNode(4)));
  // show(list1);
  // show(list2);
  Solution s;
  ListNode *newList = s.mergeTwoLists(list1, list2);
  show(newList);
  return 0;
}