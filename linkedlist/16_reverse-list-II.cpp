class Solution {
public:
    
    ListNode* reverse(ListNode* head, int k)
    {
        if(k==1)
            return head;
        ListNode* prev=NULL, *curr=head, *nextptr;
        int cnt=0;
        while(curr!=NULL && cnt<k)
        {
            nextptr=curr->next;
            curr->next=prev;
            prev=curr;
            curr=nextptr;
            cnt++;
        }
        head->next=curr;
        return prev;
    }
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        int k=right-left+1;
        if(k==0)
            return head;
        ListNode* tmp=head, *prev;
        int cnt=1;
        while(tmp!=NULL)
        {
            if(cnt==left)
                break;
            cnt++;
            prev=tmp;
            tmp=tmp->next;
        }
        if(left==1)
            return reverse(tmp,k);
        prev->next=reverse(tmp, k);
        return head;
    }
};