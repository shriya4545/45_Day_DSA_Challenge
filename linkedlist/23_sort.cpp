class Solution {
public:

    ListNode* merge(ListNode* l1, ListNode* l2)
    {
        ListNode* dummy= new ListNode(0);
        ListNode* tmp=dummy;
        while(l1!=NULL && l2!=NULL)
        {
            if(l1->val <= l2->val)
            {
                tmp->next=l1;
                tmp=l1;
                l1=l1->next;
            }
            else
            {
                tmp->next=l2;
                tmp=l2;
                l2=l2->next;
            }
        }
        while(l1!=NULL)
        {
            tmp->next=l1;
            tmp=l1;
            l1=l1->next;
        }
        while(l2!=NULL)
        {
            tmp->next=l2;
            tmp=l2;
            l2=l2->next;
        }
        return dummy->next;
    }

    ListNode* sortList(ListNode* head) {
        if(head==NULL || head->next==NULL)
        return head;

        ListNode* slow=head, *fast=head->next;
        while(fast!=NULL && fast->next!=NULL)
        {
            slow=slow->next;
            fast=fast->next->next;
        }
        ListNode* left=head, *right=slow->next;
        slow->next=NULL;

        left=sortList(left);
        right=sortList(right);

        return merge(left, right);
    }
};