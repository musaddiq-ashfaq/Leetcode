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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int len = 0;
        ListNode* current = head;
        while(current != nullptr){
            current = current->next;
            len++;
        }
        if (len == n) {
            return head->next;
        }
        int to_remove = len - n;
        current = head;
        int counter = 1;
        while(counter < to_remove){
            counter++;
            current = current->next;
        }
        current-> next = current -> next->next;
        return head;
    }
};
