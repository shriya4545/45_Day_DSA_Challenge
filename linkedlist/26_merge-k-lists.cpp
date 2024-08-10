class Solution {
public:
    ListNode* merge(ListNode* a, ListNode* b)
    {
        ListNode* dummy = new ListNode(0);
        ListNode* it = dummy;

        while(a!=NULL && b!=NULL)
        {
            if(a->val < b->val)
            {
                it->next = a;
                it=it->next;
                a=a->next;
            }
            else
            {
                it->next = b;
                it=it->next;
                b=b->next;
            }
        }
        if(a)
        it->next = a;
        else if(b)
        it->next = b;

        return dummy->next;
    }
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        if(lists.size()==0)
        return NULL;
        if(lists.size()==1)
        return lists[0];

        ListNode* head = lists[0];
        for(int i=1; i<lists.size(); i++)
        {
            head = merge(head, lists[i]);
        }
        return head;
    }
};

//alternate --> use priority queue to store values, and create new linked list