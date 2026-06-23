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
    ListNode* prev=nullptr;
    ListNode* current=head;
    while(current){
        ListNode* next=current->next;
        current->next=prev;
        prev=current;
        current=next;
    }
    return prev;
}
    ListNode* doubleIt(ListNode* head) {
        ListNode* temp=reverse(head);
        ListNode* head1=nullptr;
        ListNode* tail1=nullptr;
        int a=0,carry=0;
        while(temp || carry){
         a =(temp!=nullptr)? temp->val*2+carry : carry; 
         carry=a/10;
         a=a%10;
        ListNode* node = new ListNode(a);
            if (!head1) {
                head1 = tail1 = node;
            } else {
                tail1->next = node;
                tail1 = node;
            }
            
            if(temp)
            temp=temp->next;
        }
     return reverse(head1);
    }
};