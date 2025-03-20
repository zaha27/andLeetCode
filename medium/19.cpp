/*class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode *p = head;
        int sz = 0;

        while (p != nullptr) {
            sz++;
            p = p->next;
        }

        int nth = sz - n; 

        if (nth == 0) {
            ListNode* newHead = head->next;
            delete head;
            return newHead;
        }

        p = head;
        for (int i = 0; i < nth - 1; i++) {
            p = p->next;
        }

        ListNode *temp = p->next;
        p->next = temp->next;
        delete temp;

        return head;
    }
};
*/