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
    ListNode* rotateRight(ListNode* head, int k) {
        if(k == 0 || !head)
            return head;
        ListNode* tail = head;
        int length = 1;
        while (tail->next) {
            tail = tail->next;
            length++;
        }
        k = k % length;
        if (k == 0) 
            return head;
        tail->next = head;
        int stepsTillNewTail = length - k - 1;
        ListNode* newTail = head;
        for (int i = 0; i < stepsTillNewTail; i++)
            newTail = newTail->next;
        ListNode* newHead = newTail->next;
        newTail->next = nullptr;

        return newHead;
    }
};


