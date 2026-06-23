class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode* prev = nullptr;
        while (head) {
            ListNode* nxt = head->next;
            head->next = prev;
            prev = head;
            head = nxt;
        }
        return prev;
    }

    ListNode* removeNodes(ListNode* head) {
        if (!head) return head;
        head = reverseList(head);
        int max = head->val;
        ListNode* curr = head;
        while (curr && curr->next) {
            if (curr->next->val < max) {
                curr->next = curr->next->next;
            } else {
                curr = curr->next;
                max = curr->val;
            }
        }
        return reverseList(head);
    }
};
