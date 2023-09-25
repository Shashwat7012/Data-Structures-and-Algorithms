// list :- implemetation is through double linked list.
// double linked list :- There is two pointers (front and back).

// direct access :- No
// from travel or traverse.

// creation of list
#include<iostream>
#include<list>
using namespace std;
int main(){
    list<int>l;

    //push
    l.push_back(1);
    l.push_front(2);
    for(int i:l){
        cout<<i<<" ";

    }
    cout<<endl<<"after erase :- ";
    l.erase(l.begin());
    for(int i:l){
        cout<<i<<" ";

    }

    // erase:- O(n);
    // but all for all of the rest opeations :- O(1);
    //pop back
    // push back
// pop back
// through front and end also.

// copy one to another


//copied list
list<int>newlist(l);
cout<<endl;
for(int i:newlist){
        cout<<i<<" ";

    }
}