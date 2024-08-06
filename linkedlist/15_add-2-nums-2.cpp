class Solution {
public:
    //solution using stack
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        stack<int> s1, s2;
        ListNode* tmp = l1;
        while(tmp!=NULL)
        {
            s1.push(tmp->val);
            tmp=tmp->next;
        }
        tmp = l2;
        while(tmp!=NULL)
        {
            s2.push(tmp->val);
            tmp=tmp->next;
        }
        int carry = 0;
        ListNode* dummy = new ListNode(0);
        while(!s1.empty() && !s2.empty())
        {
            int dig = s1.top() + s2.top() + carry;
            s1.pop(); s2.pop();
            carry = dig/10;
            dig = dig%10;
            ListNode* curr = new ListNode(dig);
            curr->next = dummy->next;
            dummy->next = curr;
        }

        while(!s1.empty())
        {
            int dig = s1.top() + carry;
            s1.pop(); 
            carry = dig/10;
            dig = dig%10;
            ListNode* curr = new ListNode(dig);
            curr->next = dummy->next;
            dummy->next = curr;
        }

        while(!s2.empty())
        {
            int dig = s2.top() + carry;
            s2.pop(); 
            carry = dig/10;
            dig = dig%10;
            ListNode* curr = new ListNode(dig);
            curr->next = dummy->next;
            dummy->next = curr;
        }
        if(carry!=0)
        {
            ListNode* curr = new ListNode(carry);
            curr->next = dummy->next;
            dummy->next = curr;
        }
        return dummy->next;
    }
};