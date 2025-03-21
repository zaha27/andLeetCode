/*class Solution {
public:
    ListNode* swapPairs(ListNode* head) {
        if (!head || !head->next) return head;

        ListNode* newHead = head->next;
        head->next = newHead->next;
        newHead->next = head;

        ListNode* prev = head;
        ListNode* curr = head->next;

        while (curr && curr->next) {
            ListNode* first = curr;
            ListNode* second = curr->next;

            prev->next = second;
            first->next = second->next;
            second->next = first;

            prev = first;
            curr = first->next;
        }

        return newHead;
    }
};
*/