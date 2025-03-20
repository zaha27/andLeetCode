/*class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        vector<int> v1, v2;
        ListNode *p = list1, *q = list2;

        while (p != nullptr) { v1.push_back(p->val); p = p->next; }
        while (q != nullptr) { v2.push_back(q->val); q = q->next; }

        vector<int> merged;
        int i = 0, j = 0;
        while (i < v1.size() && j < v2.size()) {
            if (v1[i] < v2[j]) {
                merged.push_back(v1[i++]);
            } else {
                merged.push_back(v2[j++]);
            }
        }

        while (i < v1.size()) merged.push_back(v1[i++]);
        while (j < v2.size()) merged.push_back(v2[j++]);

        if (merged.empty()) return nullptr;

        ListNode *newHead = new ListNode(merged[0]);
        ListNode *current = newHead;
        for (int k = 1; k < merged.size(); k++) {
            current->next = new ListNode(merged[k]);
            current = current->next;
        }

        return newHead;
    }
};
*/
