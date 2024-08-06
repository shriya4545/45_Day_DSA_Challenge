class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
        while (head != NULL && head->val == val) {
            ListNode* temp = head;
            head = head->next;
            delete temp; 
        }
        
        ListNode* curr = head;
        ListNode* prev = NULL;

        while (curr != NULL) {
            if (curr->val == val) {
                prev->next = curr->next;
                delete curr; 
                curr = prev->next;
            } else {
                prev = curr;
                curr = curr->next;
            }
        }
        
        return head;
    }
};