class Solution {
  public:
    Node* divide(Node* head) {
        // code here
        Node* even = new Node(0);
        Node* odd = new Node(0);
        Node* it1 = even, *it2 = odd;

        while(head!=NULL)
        {
            if(head->data%2==0)
            {
                it1->next = head;
                it1=it1->next;
            }
            else
            {
                it2->next = head;
                it2=it2->next;
            }
            head=head->next;
        }
        it1->next = odd->next;
        it2->next = NULL;
        return even->next;
    }
};