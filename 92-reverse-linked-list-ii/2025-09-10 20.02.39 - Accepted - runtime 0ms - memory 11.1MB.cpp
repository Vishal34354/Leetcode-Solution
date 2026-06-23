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
    ListNode* reverse(ListNode *head){
        ListNode* prev=nullptr;
        ListNode* curr=head;
        while(curr){
            ListNode* next=curr->next;
            curr->next=prev;
            prev=curr;
            curr=next;
        }
        return prev;
    }
    ListNode* reverseBetween(ListNode* head, int left, int right) {
     if(!head || left==right)
     return head;
    else{
         ListNode* temp=head;
         ListNode* ntemp=head;
         ListNode* ptemp=nullptr;
         int count=0;
         for(int i=0;i<left-1;i++){
            ptemp=temp;
            temp=temp->next;
         }
         for(int i=0;i<right-1;i++){
            ntemp=ntemp->next;
         } 
      ListNode* after = ntemp->next;
     ntemp->next = nullptr;
ListNode* newHead = reverse(temp);
if (ptemp) {
    ptemp->next = newHead;
} else {
    head = newHead;  
}
while (newHead->next) {
    newHead = newHead->next;
}
newHead->next = after;
}
 return head;
 }
};