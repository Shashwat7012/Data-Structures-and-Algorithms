#include <bits/stdc++.h>

/************************************************************

    Following is the linked list node structure.
    
    template <typename T>
    class Node {
        public:
        T data;
        Node* next;

        Node(T data) {
            next = NULL;
            this->data = data;
        }

        ~Node() {
            if (next != NULL) {
                delete next;
            }
        }
    };

************************************************************/
Node<int>* solve(Node<int>*first, Node<int>* second){
    // this is due to template :- explained in graph :- check Node<int>*

    Node<int>*curr1 = first;
    Node<int>*next1 = curr1 -> next;
    Node<int>*curr2 = second;
    Node<int>*next2 = curr2->next;

//if only one node is present in first list
if(first->next == NULL){
    first->next = second;
    return first;
}


    while(next1 != NULL &&  curr2 != NULL){
        if((curr2 -> data >= curr1 -> data)
        &&(curr2 -> data <= next1 -> data)){
            //adding nodes
            curr1 -> next = curr2;
            next2 = curr2->next;
            curr2 -> next = next1;

// we have to update pointers
            curr1 = curr2;
            curr2 = next2;

        }
        else{
            // curr1 nd next1 :- to b pushed forword
            curr1 = next1;
            next1 = next1->next;

// if we traversed all of the first list then merge everything
            if(next1 == NULL){
                curr1 -> next = curr2;
                return first;
            }
        
        }
    }
    return first;
}

Node<int>* sortTwoLists(Node<int>* first, Node<int>* second)
{
    if(first == NULL){
        return second;
    }
    if(second == NULL){
        return first;
    }

// in this we will check which list is going to be first list
    if(first -> data <= second->data){
        return solve(first,second);
    }
    else{
       return  solve(second,first);
    }
}
