#include <iostream>
using namespace std;

struct ListNode {
    int val;
    ListNode* next;
};

ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
    if (!headA || !headB) return nullptr;

    int lenA = 0, lenB = 0;
    ListNode* a = headA;
    ListNode* b = headB;
    
    
    while (a) {
        lenA++;
        a = a->next;
    }

    while (b) {
        lenB++;
        b = b->next;
    }

    a = headA;
    b = headB;
    int diff = abs(lenA - lenB);

    if (lenA > lenB) {
        for (int i = 0; i < diff; ++i) a = a->next;
    } else {
        for (int i = 0; i < diff; ++i) b = b->next;
    }

    while (a && b) {
        if (a == b) return a;
        a = a->next;
        b = b->next;
    }

    return nullptr; 
}