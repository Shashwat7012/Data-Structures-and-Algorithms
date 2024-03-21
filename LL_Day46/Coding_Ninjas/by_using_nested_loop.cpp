//bruteForce
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
    if (head == NULL) {
        return NULL;
    }

    Node *curr = head;

    while (curr != NULL) {
        Node *temp = curr;

        while (temp->next != NULL) {
            if (curr->data == temp->next->data) {
                Node *temp1 = temp->next;
                temp->next = temp->next->next;
                delete temp1;
            } else {
                temp = temp->next;
            }
        }

        curr = curr->next;
    }

    return head;
}