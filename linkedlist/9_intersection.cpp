class Solution {
public:
    int Length(ListNode *head)
    {
        ListNode *tmp=head;
        int cnt=0;
        while(tmp!=NULL)
        {
            tmp=tmp->next;
            cnt++;
        }
        return cnt;
    }
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
       int l1=Length(headA);
        int l2=Length(headB);
        int d=0; 
        ListNode *ptr1, *ptr2;
        if(l1>l2){
            d=l1-l2;
            ptr1=headA;
            ptr2=headB;
        }
        else{
            d=l2-l1;
            ptr1=headB;
            ptr2=headA;
        }
        while(d){
            if(ptr1==NULL)
                return NULL;
            ptr1=ptr1->next; d--;
        }
        while(ptr1!=NULL && ptr2!=NULL)
        {
            if(ptr1==ptr2)
                return ptr1;
            ptr1=ptr1->next;
            ptr2=ptr2->next;
        }
        return NULL;
    }
};