/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* prev;
    Node* next;
    Node* child;
};
*/

class Solution {
public:
    Node* flatten(Node* head) {
        if(!head)
        return head;
        Node* temp=head;
        Node* ptemp=nullptr;
        while(temp!=nullptr){
            ptemp=temp;
            if(temp->child!=nullptr){
            ptemp=temp->next;
            Node* Hc=temp->child;
           Hc->prev=temp;
          temp->next=temp->child;
          temp->child=nullptr;
            while(Hc->next!=nullptr){
                Hc=Hc->next;
            }
            Hc->next=ptemp;
            if(ptemp)
          ptemp->prev=Hc;
            } 
            temp=temp->next;
        }
        return head;
    }
};