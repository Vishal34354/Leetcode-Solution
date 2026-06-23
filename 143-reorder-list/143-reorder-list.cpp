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
    void reorderList(ListNode* head) {
        ListNode* temp1=head;
        ListNode* slow=head;
        ListNode* fast=head;
         ListNode* ptemp1=nullptr;
        ListNode* ptemp2=nullptr;
        while(fast && fast->next){
            slow=slow->next;
            fast=fast->next->next;
        }
        ListNode* temp2=reverse(slow->next);
        slow->next=nullptr;
        while(temp2!=nullptr){
         ptemp1=temp1;
         temp1=temp1->next;
        ptemp2=temp2;
         temp2=temp2->next;
         ptemp1->next=ptemp2;
         ptemp2->next=temp1;
        }
        }
};