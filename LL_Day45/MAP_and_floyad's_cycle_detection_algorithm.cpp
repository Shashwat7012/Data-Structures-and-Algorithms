#include<iostream>
#include<map>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    //constructor
    Node(int d) {
        this->data = d;
        this->next = NULL;
    }

    ~Node() {
        int value = this->data;
        if (this->next != NULL) {
            delete next;
            next = NULL;
        }
        cout << "Memory is free for node with data " << value << endl;
    }
};

// in this, we do not need the head pointer; we always do from the tail pointer
void insertNode(Node*& tail, int element, int d) {
    // assuming that element is present in linked list

    // empty list
    if (tail == NULL) {
        Node* newnode = new Node(d);
        tail = newnode;
        newnode->next = newnode;
    }
    else {
        // non-empty list

        // current pointer
        Node* current = tail;
        while (current->data != element) {
            current = current->next;
        }
        // element found and current is on that

        Node* temp = new Node(d);
        temp->next = current->next;
        current->next = temp;
    }
}

void print(Node* tail) {
    Node* temp = tail;
    // if the list is empty
    if (tail == NULL) {
        cout << "List is empty" << endl;
        return;
    }
    cout << tail->data << " ";

    while (tail->next != temp) {
        tail = tail->next;
        cout << tail->data << " ";
    }
    cout << endl;
}

// deletion
void Delete(Node*& tail, int value) {
    // empty list
    if (tail == NULL) {
        cout << " List is empty " << endl;
    }

    // assuming that the value is present
    else {
        // non-empty
        Node* prev = tail;
        Node* curr = prev->next;

        while (curr->data != value) {
            prev = curr;
            curr = curr->next;
        }

        prev->next = curr->next;
        // if 1 node is present
        if (curr == prev) {
            tail = NULL;
        }
        // if 2 nodes present >=2
        else if (tail == curr) {
            tail = prev;
        }
        curr->next = NULL;
        delete curr;
    }
}

// main question
bool isCircular(Node* head) {
    if (head == NULL) {
        return true;
    }

    Node* temp = head->next;
    while (temp != NULL && temp != head) {
        temp = temp->next;
    }
    if (temp == head) {
        return true;
    }
    return false;
}

bool detectloop(Node* head) {
    if (head == NULL) {
        return false;
    }

    map<Node*, bool> visited;

    Node* temp = head;

    while (temp != NULL) {

        if (visited[temp] == true) {
            // cycle is present
            return 1;
        }
        visited[temp] = true;
        temp = temp->next;
    }
    return false;
}

Node* floydDetectLoop(Node* head) {
    if (head == NULL) {
        return NULL;
    }
    Node* slow = head;
    Node* fast = head;

    while (slow != NULL && fast != NULL) {
        fast = fast->next;
        if (fast != NULL) {
            fast = fast->next;
        }

        slow = slow->next;

        if (slow == fast) {
            return slow;
        }
    }
    return NULL;
}

Node* getstartingNode(Node* head) {
    if (head == NULL) {
        return NULL;
    }

    Node* intersection = floydDetectLoop(head);
    Node* slow = head;
    while (slow != intersection) {
        slow = slow->next;
        intersection = intersection->next;
    }

    return slow;
}

void removeloop(Node* head){
    if(head == NULL){
        return;
    }

    Node* startofLoop = getstartingNode(head);
    Node*temp = startofLoop;

    while(temp != startofLoop){
        temp = temp -> next;
    }
    temp -> next = NULL;
}

int main() {
    Node* tail = NULL;

    // insert in an empty list. No matter what the element is in that case
    insertNode(tail, 5, 3);
    print(tail);

    insertNode(tail, 3, 5);
    print(tail);

    insertNode(tail, 5, 7);
    print(tail);

    insertNode(tail, 5, 6);
    print(tail);

    insertNode(tail, 3, 4);
    print(tail);

    Delete(tail, 3);
    print(tail);

    Delete(tail, 5);
    print(tail);

    Delete(tail, 6);
    print(tail);

    if (isCircular(tail)) {
        cout << "Linked List is circular" << endl;
    }
    else {
        cout << "LL is not circular" << endl;
    }

    if (floydDetectLoop(tail) != NULL) {
        cout << "Cycle is present" << endl;
    }
    else {
        cout << "Cycle not present" << endl;
    }

    cout << "Printing the starting node of cycle";

    Node* startingNode = getstartingNode(tail);

    if (startingNode != NULL) {
        cout << startingNode->data << endl;
    }
    else {
        cout << "No cycle present, starting node not applicable." << endl;
    }

    return 0;

    removeloop(head);
    print(head);
}
