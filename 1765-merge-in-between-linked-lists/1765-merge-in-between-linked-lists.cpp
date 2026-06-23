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
    ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) {
        ListNode* temp=list1;
        ListNode* curr=nullptr;
        ListNode* prev=list1->next;
        ListNode* ptemp=list1;
        while(a){
            curr=temp;
            temp=temp->next;
            a--;
        }
         while(b){
            ptemp=ptemp->next;
            prev=prev->next;
            b--;
        }
        curr->next=nullptr;
        ptemp->next=nullptr;
        curr->next=list2;
        curr=curr->next;
        while(curr->next)
        curr=curr->next;
        curr->next=prev;
        return list1;
    }
};