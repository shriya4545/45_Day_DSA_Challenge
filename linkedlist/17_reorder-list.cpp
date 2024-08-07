class Solution {
public:
    void reorderList(ListNode* head) {
        int len=0;
        ListNode* tmp=head;
        while(tmp!=NULL)
        {
            len++;
            tmp=tmp->next;
        }
        stack<int> s;
        int totlen=len;
        len = (len/2)+(len%2);
        tmp=head;
        while(len--)
        {
            tmp=tmp->next;
        }
        while(tmp!=NULL)
        {
            s.push(tmp->val);
            tmp=tmp->next;
        }
        tmp=head;
        while(!s.empty())
        {
            ListNode* curr = new ListNode(s.top());
            s.pop();
            
            curr->next = tmp->next;
            tmp->next=curr;
            if(s.empty())
            {
                if(totlen%2==0)
                {
                    tmp=tmp->next;
                    tmp->next=NULL;
                    break;
                }
                else
                {
                    tmp = tmp->next->next;
                    tmp->next=NULL;
                    break;
                }
            }
            tmp=tmp->next->next;
        }
        
        return;
    }
};