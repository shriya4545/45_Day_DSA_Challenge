class Solution {
public:
    int Length(ListNode* head)
               {
                   ListNode* tmp=head;
                   int cnt=0;
                   while(tmp!=NULL)
                   {
                       tmp=tmp->next;
                       cnt++;
                   }
                   return cnt;
               }
    ListNode* reverseKGroup(ListNode* head, int k) {
        ListNode *prevptr=NULL;
        ListNode *currptr=head;
        ListNode *nextptr;
        int length=Length(head);
        if(length>=k)
        {
            for(int i=0; i<k; i++){
            nextptr=currptr->next;
            currptr->next=prevptr;
            prevptr=currptr;
            currptr=nextptr;
            //count++;
            }
        }
        if(length-k>=k)
        head->next=reverseKGroup(nextptr, k);
        else
            head->next=nextptr;
        return prevptr;
    }
};