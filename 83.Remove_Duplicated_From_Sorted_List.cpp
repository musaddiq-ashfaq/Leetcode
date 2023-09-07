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
    ListNode* deleteDuplicates(ListNode* head) {
        if(head == nullptr)
            return nullptr;
        int prev = head->val;
        ListNode* current = head;
        while(current->next != nullptr)
        {
            if(current->next->val == prev)
            {
                ListNode* temp = current->next;
                current->next = current->next->next;
                delete temp;
            }
            else
            {
                current = current->next;
                prev = current->val;
            }
        }
        return head;
    }
};