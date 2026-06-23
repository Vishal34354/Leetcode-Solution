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
 ListNode* reverse(ListNode* head){
        if(!head || !head->next)
        return head;
        ListNode* curr=head;
        ListNode* prev=nullptr;
        while(curr){
            ListNode* next=curr->next;
            curr->next=prev;
            prev=curr;
            curr=next;
        }
        return prev;
    }
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
          ListNode* p = reverse(l1);
        ListNode* q = reverse(l2);
        ListNode* head = nullptr;  
        ListNode* tail = nullptr;   
        int carry = 0;

        while (p != nullptr || q != nullptr || carry != 0) {
            int a = (p != nullptr) ? p->val : 0;
            int b = (q != nullptr) ? q->val : 0;
            int s = a + b + carry;
            carry = s / 10;
            int digit = s % 10;

            ListNode* node = new ListNode(digit);
            if (!head) {
                head = tail = node;
            } else {
                tail->next = node;
                tail = node;
            }

            if (p) p = p->next;
            if (q) q = q->next;
        }

        return reverse(head);
    }
};