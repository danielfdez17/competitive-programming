/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution
{
public:
  ListNode *deleteDuplicates(ListNode *head)
  {
    ListNode *it = head, *prev = nullptr;
    while (it != nullptr)
    {
      if (prev == nullptr)
      {
        prev = it;
        it = it->next;
        continue;
      }
      if (prev->val == it->val)
      {
        prev->next = it->next;
        it = it->next;
      }
      else
      {
        prev = it;
        it = it->next;
      }
    }
    return head;
  }
};