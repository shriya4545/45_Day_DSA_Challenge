bool isPalindrome(ListNode* head) {
        vector<int> arr;
        while(head!=NULL)
        {
            arr.push_back(head->val);
            head=head->next;
        }
        int i=0, j=arr.size()-1;
        for(;i<=j; i++, j--)
        {
            if(arr[i]!=arr[j])
                return false;
        }
        return true;
    }