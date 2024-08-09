class Solution {
public:
    ListNode* partition(ListNode* head, int x) {
        ListNode* less = new ListNode(0);
        ListNode* more = new ListNode(0);
        ListNode* it1 = less, *it2 = more;

        while(head!=NULL)
        {
            if(head->val < x)
            {
                it1->next = head;
                it1=it1->next;
            }
            else
            {
                it2->next = head;
                it2=it2->next;
            }
            head=head->next;
        }
        it1->next = more->next;
        it2->next = NULL;
        return less->next;
    }
};