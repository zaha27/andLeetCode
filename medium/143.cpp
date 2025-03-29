
/*
class Solution {
public:
    ListNode *reverseList(ListNode *head) {
        ListNode *prev = NULL;
       ListNode *curr = head;
        ListNode *next = head;
        while(curr!=NULL) {
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }
        return prev;
    } 
    void reorderList(ListNode* head) {
        ListNode *slow = head;
        ListNode *fast = head;
        while(fast->next!=NULL && fast->next->next!=NULL) {
            slow = slow->next;
            fast = fast->next->next;
        }
        
        ListNode *b = reverseList(slow->next);
        ListNode *a = head;
        slow->next=NULL;
        ListNode *tempA = a;
        ListNode *tempB = b;
        ListNode *c= new ListNode(34);
        ListNode *tempC = c;
        while(tempA!=NULL && tempB!=NULL) {
           tempC->next = tempA;
           tempA = tempA->next;
           tempC = tempC->next;
           tempC->next = tempB;
           tempB = tempB->next;
           tempC = tempC->next;
        }
        tempC->next = tempA;
        
        head = c->next;





    }
};*/