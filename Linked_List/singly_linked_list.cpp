//insertion at head
#include<iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int data) {
        this->data = data;
        this->next = NULL;
    }
};

void InsertAtHead(Node*& head, int d) {
    //new node
    Node* temp = new Node(d);
    temp->next = head;
    head = temp;
}

//Insert at tail
void InsertAtTail(Node*& tail, int d) {
    //new node
    Node* temp = new Node(d);
    tail->next = temp;
    tail = temp;
}

//Insert at position
void InsertAtPosition(Node*& head, Node*& tail, int position, int d) {
    //insert at start
    if (position == 1) {
        InsertAtHead(head, d);
        return;
    }

    Node* temp = head;
    int cnt = 1;

    // Traverse to the node at position - 1
    while (cnt < position - 1 && temp != NULL) {
        temp = temp->next;
        cnt++;
    }

    // Check if position is valid
    if (temp == NULL || position < 1) {
        cout << "Invalid position." << endl;
        return;
    }

    //inserting at last
    if (temp->next == NULL) {
        InsertAtTail(tail, d);
        return;
    }

    // Create a new node
    Node* nodeToInsert = new Node(d);

    // Update the next pointers
    nodeToInsert->next = temp->next;
    temp->next = nodeToInsert;
}

void print(Node*& head) {
    //how
    Node* temp = head;
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main() {

    Node* node1 = new Node(10);

    cout << node1->data << endl;
    cout << node1->next << endl;

    //head pointed to new node1
    Node* head = node1;
    Node* tail = node1;
    print(head);

    InsertAtTail(tail, 12);
    print(head);

    InsertAtTail(tail, 15);
    print(head);

    InsertAtPosition(head, tail, 3, 22);
    print(head);

    return 0;
}
