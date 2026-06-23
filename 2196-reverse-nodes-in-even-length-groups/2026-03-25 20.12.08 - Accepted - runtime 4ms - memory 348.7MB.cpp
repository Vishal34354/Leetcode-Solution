
class Solution {                
public:
    ListNode* reverse(ListNode *head){
        ListNode *p, *q, *r;
        p = head, q = NULL, r = NULL;
        while(p){
            q = p;
            p = p -> next;
            q->next = r;
            r = q;
        }
        head = q;
        return head;
    }
    ListNode* reverseEvenLengthGroups(ListNode* head) {
        int cnt = 0, num = 1;
        ListNode *node = head, *back = head, *front = NULL, *temp = NULL;
        while(node){
            cnt++;
            if(cnt == num){
                front = node -> next;
                if(cnt % 2 == 0){
                    temp = back -> next;
                    node -> next = NULL;
                    node = reverse(temp);
                    temp -> next = front;
                    back -> next = node;
                }else{
                    back = node;
                }
                node = front;
                cnt = 0;
                num++;
            }else{
                node = node -> next;
            }
        }
        if(cnt != 0 && cnt % 2 == 0){
            while(temp -> next != front)
                temp = temp -> next;
            node = reverse(front);
            temp -> next = node;
        }
        return head;
    }
};