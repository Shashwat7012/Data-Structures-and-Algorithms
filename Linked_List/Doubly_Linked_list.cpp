#include<iostream>
using namespace std;

class Node {
public:
    int data;
    Node* prev;
    Node* next;

    //constructor
    Node(int d) {
        this->data = d;
        this->prev = NULL;
        this->next = NULL;
    }

    ~Node(){
        int value = this->data;
        if (next != NULL) {
            delete next;
            next = NULL;
        }
        if (prev != NULL) {
            delete prev;
            prev = NULL;
        }
        cout << "Memory free for Node with data " << value << endl;
    }
};

//printing function of linked list
void print(Node* head) {
    Node* temp = head;
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

//length of linked list
int getlength(Node* head) {
    int length = 0;
    Node* temp = head;
    while (temp != NULL) {
        length++;
        temp = temp->next;
    }
    return length;
}

// inserting at head
void insertAthead(Node* &head, int d) {
    Node* temp = new Node(d);
    if (head == NULL) {
        head = temp;
    } else {
        temp->next = head;
        head->prev = temp;
        head = temp;
    }
}

// inserting at tail
void InsertAtTail(Node* &tail, int d) {
    Node* temp = new Node(d);
    if (tail == NULL) {
        tail = temp;
    } else {
        tail->next = temp;
        temp->prev = tail;
        tail = temp;
    }
}

//inserting at any position
void InsertAtPosition(Node* &tail, Node* &head, int position, int d) {
    // insert at start
    if (position == 1) {
        insertAthead(head, d);
        return;
    }

    //at any position except 1
    Node* temp = head;
    int cnt = 1;

    while (cnt < position - 1) {
        temp = temp->next;
        cnt++;
    }

    //inserting at last position
    if (temp->next == NULL) {
        InsertAtTail(tail, d);
        return;
    }

    //creating a node
    Node* nodeI = new Node(d);

    nodeI->next = temp->next;
    temp->next->prev = nodeI;
    temp->next = nodeI;
    nodeI->prev = temp;
}

//deletion
void Delete(int position, Node* &head){
    //deleting 1st
    if(position == 1){
        Node* temp = head;
        temp->next->prev = NULL;
        head = temp->next;
        temp->next = NULL;
        delete temp;
    }
    else{
        //deleting the last node and middle node
        Node* current = head;
        Node* prev = NULL;

        int cnt = 1;
        while(cnt < position){
            prev = current;
            current = current->next;
            cnt++;
        }
        current->prev = NULL;
        prev->next = current->next;
        current->next = NULL;

        delete current;
    }
}

int main() {
    Node* head = NULL;
    Node* tail = NULL;

    print(head);
    cout << "Length: " << getlength(head) << endl;

    insertAthead(head, 11);
    print(head);

    insertAthead(head, 12);
    print(head);

    insertAthead(head, 13);
    print(head);

    InsertAtTail(tail, 25);
    print(head);

    InsertAtPosition(tail, head, 2, 100);
    print(head);

    Delete(1, head);
    print(head);

    cout<<head->data;
    cout<<tail->data;


    // Delete all nodes to free memory
    while (head != NULL) {
        Node* temp = head;
        head = head->next;
        delete temp;
    }


    return 0;
}
