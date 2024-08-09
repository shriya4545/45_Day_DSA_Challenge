class Solution {
public:
    Node* copyRandomList(Node* head) {
        Node* tmp = head;
        while(tmp!=NULL)
        {
            Node* curr = new Node(tmp->val);
            curr->next = tmp->next;
            tmp->next=curr;
            tmp=tmp->next->next;
        }
        tmp = head;
        Node* r;
        while(tmp!=NULL)
        {
            r = tmp->random;
            if(r!=NULL)
            tmp->next->random = r->next;
            tmp=tmp->next->next;
        }
        tmp=head;
        Node* dummy = new Node(0);
        Node* it = dummy, *fast;
        while(tmp!=NULL)
        {
            fast = tmp->next->next;
            it->next = tmp->next;
            it=it->next;
            tmp->next = fast;
            tmp = fast;
        }
        return dummy->next;
    }
};