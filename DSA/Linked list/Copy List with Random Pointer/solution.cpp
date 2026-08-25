
class Solution {
public:
    Node* copyRandomList(Node* head) {
        if (head == NULL) return NULL;
        
        Node* cur = head;
        while (cur != NULL){
            Node* cpy = new Node(cur->val);
            cpy->next = cur->next;
            cur->next = cpy;
            cur = cur->next->next;
        }

        cur = head;
        while (cur != NULL){
            if (cur->random != NULL)
                cur->next->random = cur->random->next;
            cur = cur->next->next;
        }

        cur = head;
        Node* copyHead = head->next;
        while (cur != NULL) {
            Node* copy = cur->next;

            cur->next = copy->next;

            if (copy->next != NULL)
                 copy->next = copy->next->next;

            cur = cur->next;
        }

        return copyHead;
    }
};
