#include <unordered_map>

class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        if (!head) return nullptr;

        std::unordered_map<int, int> freq;

        for (ListNode* p = head; p; p = p->next) {
            freq[p->val]++;
        }

        ListNode dummy(0);
        dummy.next = head;

        ListNode* prev = &dummy;
        ListNode* current = head;

        // A doua parcurgere: șterge nodurile cu valoare duplicată
        while (current) {
            if (freq[current->val] > 1) {
                ListNode* temp = current;
                current = current->next;
                delete temp;
                prev->next = current;
            } else {
                prev = current;
                current = current->next;
            }
        }

        return dummy.next;
    }
};
