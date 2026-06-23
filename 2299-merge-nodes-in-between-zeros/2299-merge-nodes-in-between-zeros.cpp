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
    ListNode* mergeNodes(ListNode* head) {
        ListNode* read=head->next,*write=head;
        int sum=0;
        while(read){
            if(read->val!=0)sum+=read->val;
            else{
                write->val=sum;
                write->next=read->next;
                write=write->next;
                sum=0;
            }
            read=read->next;
        }
        return head;
    }
};