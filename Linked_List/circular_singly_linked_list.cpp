#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node*next;

    //constructor
    Node(int d){
        this->data = d;
        this->next = NULL;
    }

    ~Node(){
        int value = this->data;
        if(this->next != NULL){
            delete next;
            next = NULL;
        }
        cout<<"Memory is free for node with data "<<value<<endl;
    }
};

// in this we do not need the head pointer, we always do from tail pointer
void insertNode(Node* &tail, int element, int d){
//    assuming that element is present in linked list

//empty list
    if(tail == NULL){
        Node* newnode = new Node(d);
        tail = newnode;
        newnode -> next = newnode;
    }
    else{
        //non emty list
        
        //current poinnter
        Node*current = tail;
        while(current -> data != element){
            current = current->next;
        }
        //elemnt found and current is on that

        Node*temp = new Node(d);
        temp->next = current->next;
        current->next = temp;
    }
}

void print(Node* tail) {
    Node* temp = tail;
    // if list is empty
    if(tail == NULL){
        cout<<"List is empty"<<endl;
        return;
    }
    cout << tail->data << " ";

    while (tail->next != temp) {
        tail = tail->next;
        cout << tail->data << " ";
    }
    cout << endl;
}

//deletion
void Delete(Node* &tail, int value){
    //empty list
    if(tail == NULL){
        cout<<" List is empty "<<endl;

    }

    //assuming that value is pressent
    else{
        //non-emty
        Node*prev =  tail;
        Node* curr = prev->next;

        while(curr -> data != value){
            prev = curr;
            curr =  curr->next;
        }

        prev -> next = curr -> next;
        //if 1 node is present
        if(curr == prev){
            tail = NULL;
        }
        // if 2 nodes present >=2
       else if(tail == curr){
            tail = prev;
        }
        curr -> next = NULL;
        delete curr;
    }
}


int main(){
    Node* tail = NULL;
    
    //insert in emty list. No matter what the element is in that case
    insertNode(tail,5,3);
    print(tail);

    insertNode(tail,3,5);
    print(tail);

    insertNode(tail,5,7);
    print(tail);

    insertNode(tail,5,6);
    print(tail);

  insertNode(tail,3,4);
    print(tail);

    Delete(tail,3);
    print(tail);

     Delete(tail,5);
    print(tail);

     Delete(tail,6);
    print(tail);

}