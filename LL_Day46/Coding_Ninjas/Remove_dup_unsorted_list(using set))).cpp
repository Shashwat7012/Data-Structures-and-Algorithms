// best optimal solution
#include <bits/stdc++.h> 
#include<map>
/****************************************************************
    Following is the class structure of the Node class:
    class Node
    {
    public:
        int data;
        Node *next;
        Node(int data)
        {
            this->data = data;
            this->next = NULL;
        }
    };
*****************************************************************/


Node *removeDuplicates(Node *head)
{
    if(head == NULL){
        return head;
    }

    

 std::unordered_set<int> seen;
    Node *curr = head;
    Node *prev = NULL;

    while(curr != NULL){
        if(seen.find(curr -> data) != seen.end()){
            //duplicate
            Node *temp = curr;
            prev->next = curr->next;
            curr = curr->next; // Move to the next node after deletion
            delete temp;
        }
        else{
            seen.insert(curr->data);
            prev = curr;
            curr = curr -> next;
        }
    }

    return head;

}