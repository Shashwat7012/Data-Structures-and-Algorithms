//bruteforse app :- Create a new array

#include <bits/stdc++.h> 
/****************************************************************

    Following is the class structure of the LinkedListNode class:

    template <typename T>
    class LinkedListNode
    {
    public:
        T data;
        LinkedListNode<T> *next;
        LinkedListNode(T data)
        {
            this->data = data;
            this->next = NULL;
        }
    };

*****************************************************************/
bool checkpalindrome(vector<int> arr) {
    int n = arr.size();
    int s = 0;
    int e = n - 1;

    while (s <= e) {
        if (arr[s] != arr[e]) {
            return false;
        }
        s++;
        e--;
    }

    return true;
}

bool isPalindrome(LinkedListNode<int> *head) {
    vector<int> arr;
    LinkedListNode<int> *temp = head;
    while (temp != NULL) {
        arr.push_back(temp->data);
        temp = temp->next;
    }

    return checkpalindrome(arr);
}