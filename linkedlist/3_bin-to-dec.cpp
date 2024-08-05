class Solution {
public:
    #define ll long long
    int getDecimalValue(ListNode* head) {
        int len=0;
        ListNode* tmp=head;
        while(tmp!=NULL)
        {
            tmp=tmp->next;
            len++;
        }
        len--;
        tmp = head;
        ll ans=0;
        while(tmp!=NULL)
        {
            if(tmp->val==1)
            {
                ans+=(pow(2,len));
            }
            tmp=tmp->next;
            len--;
        }
        return ans;
    }
};