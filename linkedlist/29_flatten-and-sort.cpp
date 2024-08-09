class Solution {
  public:
    // Function which returns the  root of the flattened linked list.
    Node* MergeTwoList(Node* a, Node* b)
    {
        Node* temp=new Node(0);
        Node* head=temp;
        while(a!=NULL && b!=NULL)
        {
            if(a->data < b->data)
            {
                temp->bottom=a;
                temp=temp->bottom;
                a=a->bottom;
            }
            else
            {
                temp->bottom=b;
                temp=temp->bottom;
                b=b->bottom;
            }
        }
        if(a) temp->bottom=a;
        else temp->bottom=b;
        
        return head->bottom;
    }
Node *flatten(Node *root)
{
   // Your code here
   if(root==NULL || root->next==NULL)
        return root;
    //recur for list on right
    root->next=flatten(root->next);
    //now merge
    root=MergeTwoList(root, root->next);
    
    return root;
}
};