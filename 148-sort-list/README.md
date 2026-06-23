# 148-sort-list

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
    ListNode* sortList(ListNode* head) {
        ListNode* temp=head;
         deque<int> list;
        while(temp){
            list.push_back(temp->val);
            temp=temp->next;
        }
        temp=head;
        sort(list.begin(),list.end());
        while(temp){
            temp->val=list.front();
            list.pop_front();
            temp=temp->next;
        }
    return head;
    }
};

```
