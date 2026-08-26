class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int carry = 0;
        ListNode* ans = NULL;
        ListNode* curAns = NULL;
        ListNode* cur1 = l1, *cur2 = l2;

        while (cur1 != NULL && cur2 != NULL){
            int sum = cur1->val + cur2->val;

            if (carry == 1)
                sum += 1;

            if (sum >= 10){
                sum %= 10;
                carry = 1;
            }
            else
                carry = 0;
            
            ListNode* temp = new ListNode(sum);

            if (ans == NULL){
                ans = temp;
                curAns = ans;
            }
            else{
                curAns->next = temp;
                curAns = curAns->next;
            }

            cur1 = cur1->next;
            cur2 = cur2->next;
        }

        while (cur1 != NULL){
            int number = cur1->val;

            if (carry == 1)
                number += 1;

            if (number >= 10){
                number %= 10;
                carry = 1;
            }
            else
                carry = 0;

            curAns->next = new ListNode(number);
            curAns = curAns->next;

            cur1 = cur1->next;
        }

        while (cur2 != NULL){
            int number = cur2->val;

            if (carry == 1)
                number += 1;

            if (number >= 10){
                number %= 10;
                carry = 1;
            }
            else
                carry = 0;

            curAns->next = new ListNode(number);
            curAns = curAns->next;

            cur2 = cur2->next;
        }

        if (carry == 1)
            curAns->next = new ListNode(1);
        
        return ans;
    }
};
