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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int carry = 0, r = 0;
        ListNode* resultHead = nullptr;
        ListNode* resultCurrent = nullptr;
        while(l1 != NULL || l2 != NULL || carry != 0) 
        {
            if(l1 == NULL)
                l1 = new ListNode(0);
            if(l2 == NULL)
                l2 = new ListNode(0);
            r = l1->val + l2->val + carry;
            ListNode* newNode = new ListNode(r%10);
            if (resultHead == nullptr) {
                resultHead = newNode;
                resultCurrent = newNode;
            } else {
                resultCurrent->next = newNode;
                resultCurrent = resultCurrent->next;
            }
            carry = r/10;
            l1 = l1->next;
            l2 = l2->next;
        }   
        return resultHead;
    }
};

//Time complexity : O(n)