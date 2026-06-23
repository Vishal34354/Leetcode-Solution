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
        ListNode* ptemp=nullptr;
        ListNode* temp=head;
        if(!head || !head->next)
        return head;
         int count=0;
        while(temp!=nullptr){
            temp=temp->next;
            count++;
        }
        k=k%count;
        temp=head;
       while(k!=0)
       { while(temp->next!=nullptr){
            ptemp=temp;
            temp=temp->next;
            
        }
         ptemp->next=nullptr;
         temp->next=head;
         head=temp;
            k--;
        }
        return head;
    }
};