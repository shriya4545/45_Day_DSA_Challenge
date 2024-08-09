class Solution {
public:
    Node* flatten(Node* head) {
        Node* tmp = head;
        while(tmp!=NULL)
        {
            if(tmp->child!=NULL)
            {
                Node* tmp2 = tmp->next;
                tmp->next = tmp->child;
                tmp->child->prev = tmp;
                tmp->child = NULL;
                Node* tmp3 = tmp->next;
                while(tmp3!=NULL && tmp3->next!=NULL)
                {
                    tmp3=tmp3->next;
                }
                tmp3->next = tmp2;
                if(tmp2!=NULL)
                tmp2->prev = tmp3;
            }
            tmp=tmp->next;
        }
        return head;
    }
};