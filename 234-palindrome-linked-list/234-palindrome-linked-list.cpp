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
 inline ListNode* reverseList(ListNode* head){
    ListNode* prev=nullptr;
    while(head){
        ListNode* nextNode=head->next;
        head->next=prev;
        prev=head;
        head=nextNode;
    }
    return prev;
 }
    bool isPalindrome(ListNode* head) {
        if(!head||!head->next)
        return true;
        ListNode* slow=head;
        ListNode* fast=head;
        while(fast->next && fast->next->next){
            slow=slow->next;
            fast=fast->next->next;
        }
       slow->next= reverseList(slow->next);
       ListNode* second=slow->next;
       ListNode* first=head;
       while(second){
        if(first->val!=second->val)
         return false;
         first=first->next;
         second=second->next;
       }
       return true;
    }
};