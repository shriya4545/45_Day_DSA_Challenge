class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        if(head==NULL || head->next==NULL)
        return head;
        ListNode* tmp = head->next, *prev = head;
        
        while(tmp!=NULL)
        {
            if(prev->val == tmp->val)
            {
                prev->next = tmp->next;
                tmp=prev->next;
            }
            else{
            prev = tmp;
            tmp=tmp->next;
            }
        }
        return head;
    }
};