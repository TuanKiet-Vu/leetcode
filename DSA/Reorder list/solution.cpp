
class Solution {
public:
    void reorderList(ListNode* head) {
        if (!head || !head->next) return;

        ListNode* slow = head;
        ListNode* fast = head;
        while (fast->next != NULL &&  fast->next->next != NULL){
            slow = slow->next;
            fast = fast->next->next;
        }

        ListNode* cur = slow->next;
        slow->next = NULL;
        ListNode* prev = NULL;
        while (cur != NULL){
            ListNode* nxt = cur->next;
            cur->next = prev;
            prev = cur;
            cur = nxt;
        }

        ListNode* first = head;
        ListNode* second = prev;
        while (second != NULL){
            ListNode* temp1 = first->next;
            ListNode* temp2 = second->next;
            second->next = temp1;
            first->next = second;
            first = temp1;
            second = temp2;
        }
    }
};
