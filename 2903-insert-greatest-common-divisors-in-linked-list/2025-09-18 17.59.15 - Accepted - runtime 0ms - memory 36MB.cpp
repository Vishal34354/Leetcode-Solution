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
    ListNode* insertGreatestCommonDivisors(ListNode* head) {
        ListNode* temp=head;
        ListNode* ptemp=nullptr;
        while(temp->next!=nullptr){
            ptemp=temp;
            temp=temp->next;
            int val=gcd(ptemp->val,temp->val);
            ListNode* gd=new ListNode(val);
            ptemp->next=gd;
            gd->next=temp;
        }
        return head;
    }
};