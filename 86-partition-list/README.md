# 86-partition-list

## Solution

```cpp
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
    ListNode* partition(ListNode* head, int x) {
        if(!head || !head->next)
        return head;
        ListNode* less=nullptr;
        ListNode* big=nullptr;
        ListNode* head1=nullptr;
        ListNode* head2=nullptr;
    while(head!=nullptr){
        if(head->val<x){
            if(less==nullptr){
                less=head;
                head=head->next;
                less->next=nullptr;
                head1=less;
            }
            else{
                less->next=head;
                less=less->next;
                head=head->next;
                less->next=nullptr;
            }
        }
        else{
            if(big==nullptr){
                big=head;
                head=head->next;
                big->next=nullptr;
                head2=big;
            }
              else{
                big->next=head;
                big=big->next;
                head=head->next;
                big->next=nullptr;
            }
        }   
    } 
    if(less==nullptr)
     return head2;
     else{
     less->next=head2;
     return head1;
    }
    }
};
```
