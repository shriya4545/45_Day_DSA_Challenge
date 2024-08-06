class Solution
{
    public:
    Node *compute(Node *head)
    {
        // your code goes here
        if(head==NULL || head->next==NULL)
        return head;
        
        Node* nextnode = compute(head->next);
        
        if(nextnode!=NULL && head->data < nextnode->data)
        {
            return nextnode;
        }
        head->next = nextnode;
        return head;
    }
    
};