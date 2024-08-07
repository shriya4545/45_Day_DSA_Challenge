class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* start = head;
        ListNode* end = head;
        ListNode* temp = NULL;
        for(int i=1;i<n;i++)
            start=start->next;
        while(start->next){
            start=start->next;
            end=end->next;
            if(temp==NULL)
                temp=head;
            else
                temp=temp->next;
        }
        if(temp==NULL)
            head=head->next;
        else
            temp->next = end->next;
        return head;
    }
};