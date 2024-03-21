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

    map<int, bool> seen;
    Node *curr = head;
    Node *prev = NULL;

    while (curr != NULL) {
        if (!seen[curr->data]) {
            seen[curr->data] = true;
            prev = curr;
        } else {
            prev->next = curr->next;
            delete curr;
        }

        curr = prev->next;
    }

    return head;
}