class Solution {
public:
    void reorderList(ListNode* head) {
        if(!head || !head->next) return;

        ListNode *slow = head, *fast = head;

        while(fast->next && fast->next->next) {
            slow = slow->next;
            fast = fast->next->next;
        }

        ListNode* prev = NULL;
        ListNode* curr = slow->next;
        slow->next = NULL;

        while(curr) {
            ListNode* next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }

        ListNode* first = head;
        ListNode* second = prev;

        while(second) {
            ListNode* n1 = first->next;
            ListNode* n2 = second->next;

            first->next = second;
            second->next = n1;

            first = n1;
            second = n2;
        }
    }
};