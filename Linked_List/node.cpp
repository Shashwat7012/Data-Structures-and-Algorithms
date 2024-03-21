#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    public:
    Node(int data){
       this -> data = data;
       this -> next = NULL;
    }
};

int main(){
    vector<int>arr = {2,5,8,7};
    // Node*y = new Node(arr[2],nullptr);
    // cout<<y->data;
    Node*y = new Node(10);
    cout<<y -> data<<endl;
    cout<<y -> next<<endl;
}