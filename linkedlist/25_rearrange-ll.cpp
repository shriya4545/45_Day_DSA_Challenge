class Solution {
  public:
    void rearrangeEvenOdd(Node *head) {
        // Your Code here
        Node* curr = head;
        Node* tmp = new Node(0);
        Node* it = tmp;
        
        while(curr->next!=NULL)
        {
            
                it->next = curr->next;
                it=it->next;
                if(curr->next->next==NULL)
                break;
                curr->next = curr->next->next;
                curr=curr->next;
            
        }
        it->next=NULL;
        curr->next = tmp->next;
        return;
    }
};