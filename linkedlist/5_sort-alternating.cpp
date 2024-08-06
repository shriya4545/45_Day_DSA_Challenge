class Solution {
public:
    Node* reverselist(Node *&head) {
        Node* prev = NULL;
        Node* curr = head;
        Node* next;

        while (curr) {
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }
        head = prev;
        return head;
    }

    void sort(Node **head) {
        if ((*head) == NULL || (*head)->next == NULL) {
            return;
        }

        Node* ascDummy = new Node(0);
        Node* dscDummy = new Node(0);
        Node* asc = ascDummy;
        Node* dsc = dscDummy;
        Node* tmp = *head;
        bool flag = true;

        while (tmp != NULL) {
            if (flag) {
                asc->next = tmp;
                asc = asc->next;
            } else {
                dsc->next = tmp;
                dsc = dsc->next;
            }
            tmp = tmp->next;
            flag = !flag;
        }

        asc->next = NULL;
        dsc->next = NULL;

        Node* reversedDsc = reverselist(dscDummy->next);
        asc->next = reversedDsc;

        *head = ascDummy->next;

        delete ascDummy;
        delete dscDummy;
    }
};