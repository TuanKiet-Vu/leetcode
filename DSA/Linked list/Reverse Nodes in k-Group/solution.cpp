class Solution {
public:
    ListNode* reverseKGroup(ListNode* head, int k) {
        if (k == 1) return head;

        ListNode* temp = head;
        int size = 0;
        while (temp != NULL){
            size++;
            temp = temp->next;
        }
        if (size < k) return NULL;

        ListNode dummy (0,head);
        int count = 0;
        int countGroup = 0;
        int group = size/k;
        ListNode* ans = head;

        ListNode* cur = head, *prev = NULL;
        ListNode* tailPrev = &dummy, *tailCur = NULL;
        while (cur != NULL){
            if (count == 0){
                if (tailCur != NULL)
                    tailPrev = tailCur;
                tailCur = cur;
                prev = NULL;
            }
            if (countGroup == group){
                tailPrev->next = cur;
                break;
            }

            ListNode* next = cur->next;
            cur->next = prev;
            prev = cur;
            count++;
            
            if (count == k){
                countGroup++;
                count = 0;
                tailPrev->next = cur;
            }
            cur = next;
        }
        return dummy.next;
    }
};
