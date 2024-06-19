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
class Solution {
public:
    ListNode* deleteMiddle(ListNode* head) {
        if (head->next == nullptr) nullptr;
        ListNode* it = head;
        int counter = 0;
        while (it != nullptr) {
            ++counter;
            it = it->next;
        }
        int middle = counter / 2;
        ListNode* prev = head;
        it = head->next;
        counter = 1;
        while (counter != middle) {
            prev = it;
            it = it->next;
            ++counter;
        }
        if (it != nullptr)
            prev->next = it->next;
        return head;
    }
};