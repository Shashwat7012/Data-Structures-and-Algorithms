/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
private:
    // Function to insert a node at the tail of the list
    void insertAtTail(Node* &head, Node* &tail, int d) {
        Node* newNode = new Node(d);
        if (head == NULL) {
            head = newNode;
            tail = newNode;
        } else {
            tail->next = newNode;
            tail = newNode;
        }
    }

public:
    Node* copyRandomList(Node* head) {
        if (head == NULL)
            return NULL;

        Node* cloneHead = NULL;
        Node* cloneTail = NULL;

        Node *temp = head;

        // Step 1: Traverse the original list and create a copy
        while (temp != NULL) {
            insertAtTail(cloneHead, cloneTail, temp->val);
            temp = temp->next;
        }

        // Step 2: Create a map for mapping original nodes to their corresponding new nodes
        unordered_map<Node*, Node*> mapp;
        temp = head;
        Node* temp2 = cloneHead;

        while (temp != NULL && temp2 != NULL) {
            mapp[temp] = temp2;
            temp = temp->next;
            temp2 = temp2->next;
        }

        // Step 3: Update random pointers of new nodes using the mapping created
        temp = head;
        temp2 = cloneHead;

        while (temp != NULL) {
            temp2->random = mapp[temp->random];
            temp = temp->next;
            temp2 = temp2->next;
        }

        return cloneHead;
    }
};
