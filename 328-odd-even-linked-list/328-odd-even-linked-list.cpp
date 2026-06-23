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
    ListNode* oddEvenList(ListNode* head) {
        if(!head || !head->next || !head->next->next)
        return head;
        ListNode* odd=nullptr;
        ListNode* even=nullptr;
        ListNode* head1=nullptr;
        ListNode* head2=nullptr;
        while(head!=nullptr){
            if(odd==nullptr){
                odd=head;
                head=head->next;
                odd->next=nullptr;
                head1=odd;
            }
            if(even==nullptr){
                even=head;
                head=head->next;
                even->next=nullptr;
                head2=even;
            }
           odd->next=head;
           head=head->next;
           odd=odd->next;
           odd->next=nullptr;
           if(head==nullptr)
           break;
           even->next=head;
           head=head->next;  
            even=even->next;
           even->next=nullptr;
           if(head==nullptr)
           break;
        }
        odd->next=head2;
        return head1;
    }
};