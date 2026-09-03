/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* divide (vector<ListNode*>& lists, int l, int r){
        if (l==r) return lists[l];
        int mid = l+(r-l)/2;
        ListNode* list1 = divide (lists, l, mid);
        ListNode* list2 = divide (lists, mid+1, r);

        return merge (list1,list2);
    }

    ListNode* merge (ListNode* list1, ListNode* list2){
        if (list1 == NULL) return list2;
        if (list2 == NULL) return list1;

        ListNode ans (0);
        ListNode* cur = &ans;

        while (list1 != NULL && list2 != NULL){
            if (list1->val <= list2->val){
                cur->next = list1;
                list1 = list1->next;
            }
            else {
                cur->next = list2;
                list2 = list2->next;
            }
            cur = cur->next;
        }
        if (list1 != NULL)
            cur->next = list1;
        else if (list2 != NULL)
            cur->next= list2;

        return ans.next;
    }
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        if (lists.empty()) return NULL;
        return divide (lists, 0, lists.size()-1);
    }
};
