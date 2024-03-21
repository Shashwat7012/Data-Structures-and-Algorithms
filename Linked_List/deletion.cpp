#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node(int data){
        this -> data = data;
        this -> next = NULL;
    }
    //destructor
    ~Node(){
        int value = this -> data;
        // memory free
        if(this-> next!= NULL){
            delete next;
            this->next = NULL;
        }
        cout<<"Memory is free for node with data" <<value<<endl;
    }

};

void InsertAtHead(Node* &head, int d){
    Node*temp = new Node(d);
    temp-> next = head;
    head = temp;
}

void Delete(int position, Node* &head){
    //deleting 1st
    if(position == 1){
        Node*temp = head;
        head = head->next;
        //memory free the start node
        temp -> next = NULL;
        delete temp;
    }
    else{
        //deleting the last node and middle node
        Node* current = head;
        Node* prev = NULL;

        int cnt = 1;
        while(cnt < position){
            prev = current;
            current = current -> next;
            cnt++;
        }
        prev ->next = current ->next;
        current -> next = NULL;

        delete current;
    }
}

void print(Node* &head){
    Node* temp = head;
    while(temp != NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
}



int main(){
    Node*node1 = new Node(10);
    cout<<node1 ->data<<endl;

    Node* head = node1;
    InsertAtHead(head,12);
    InsertAtHead(head,15);
    InsertAtHead(head,16);
    InsertAtHead(head,17);

    print(head);

    Delete(1,head);
    print(head);





}