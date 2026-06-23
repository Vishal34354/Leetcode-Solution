# 528-swapping-nodes-in-a-linked-list

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
    ListNode* swapNodes(ListNode* head, int k) {
        ListNode* temp=head;
        ListNode* ptemp=nullptr;
        int count=0;
        while(temp){
            temp=temp->next;
            count++;
        }
        temp=head;
        for(int i=0;i<k-1;i++){
           temp=temp->next;
        }
        ptemp=head;
         for(int i=0;i<count-k;i++){
            ptemp=ptemp->next;
         }
         int a=ptemp->val;
         ptemp->val=temp->val;
         temp->val=a;
         return head;
    }
};
```
