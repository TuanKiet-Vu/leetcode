
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        if (head == NULL) return NULL;

        ListNode* cur = head;
        ListNode* prev = NULL;
        while (cur != NULL){
            head = head->next;
            cur->next = prev;
            prev = cur;
            cur = head;
        }
        return prev;
    }
};
