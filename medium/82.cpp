class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode dummy(0);
        dummy.next = head;

        ListNode* prev = &dummy;
        ListNode* current = head;

        while (current && current->next) {
            
        }

        return dummy.next;
    }
};
