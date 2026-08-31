class LRUCache {
private:
    struct Node{
        int val;
        int key;
        Node* next;
        Node* prev;
        Node (int k,int v) : key(k), val(v), next(NULL), prev(NULL) {}
    };

    Node* head = new Node(-1,-1);
    Node* tail = new Node(-1,-1);
    unordered_map<int,Node*> mp;
    int cap;

public:
    LRUCache(int capacity) {
       cap = capacity;
       
       head->next = tail;
       tail->prev = head;
    }

    void deleteNode (Node* temp){
        temp->prev->next = temp->next;
        temp->next->prev = temp->prev;
        temp->prev = NULL;
        temp->next = NULL;
    }
    void addNode(Node* temp){
        temp->next = head->next;
        temp->prev = head;
        head->next = temp;
        temp->next->prev = temp;
    }
    
    int get(int key) {
        if (mp.find(key) != mp.end()){
            Node* temp = mp[key];
            int ans = temp->val;
            deleteNode(temp);
            addNode(temp);
            return ans;
        }
        return -1;
        
    }
    
    void put(int key, int value) {
        if (mp.find(key) != mp.end()){
            Node* temp = mp[key];
            temp->val = value;
            deleteNode(temp);
            addNode(temp);
        }
        else if (mp.size() == cap){
            Node* delNode = tail->prev;
            deleteNode(delNode);
            mp.erase(delNode->key);
            delete delNode;

            Node* newNode = new Node(key,value);
            mp[key] = newNode;

            addNode(newNode);
        }
        else{
            Node* newNode = new Node (key,value);
            mp[key] = newNode;
            addNode (newNode);
        }
    }
};

/**
 * Your LRUCache object will be instantiated and called as such:
 * LRUCache* obj = new LRUCache(capacity);
 * int param_1 = obj->get(key);
 * obj->put(key,value);
 */
