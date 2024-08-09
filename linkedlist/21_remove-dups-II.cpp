class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode* dummy = new ListNode(0);
        ListNode* itr = dummy;
        ListNode* tmp = head;
        int cnt=0;
        while(tmp!=NULL)
        {
            ListNode* tmp2 = tmp;
            int data = tmp->val;
            cnt=0;
            while(tmp!=NULL && tmp->val == data)
            {
                cnt++;
                tmp=tmp->next;
            }
            if(cnt==1)
            {
                itr->next = tmp2;
                itr=itr->next;
            }
        }
        itr->next=NULL;
        return dummy->next;
    }
};