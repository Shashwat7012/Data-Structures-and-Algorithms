//Priority Queue:- The first element of the queue is always greatest :- Max Heap.
// Type of data structure in which we put the data and then 
// when we take out the data then we will follow the concept of max or min heap.


#include<iostream>
#include<queue>
using namespace std;
int main(){
    //max heap
    priority_queue<int>maxi;
    // by deafault , it is according to max heap.

    //min heap:-
    priority_queue<int, vector<int> , greater<int> > mini;

    //pushing:-
    maxi.push(1);
    maxi.push(3);
    maxi.push(2);
    maxi.push(0);

    int n = maxi.size();
    for(int i=0;i<=n;i++){
        cout<<maxi.top()<<" ";
        maxi.pop();
    }cout<<endl;



    //for mini
    mini.push(1);
    mini.push(3);
    mini.push(2);
    mini.push(0);

    
    int m = mini.size();
    for(int i=0;i<=m;i++){
        cout<<mini.top()<<" ";
        mini.pop();
    }cout<<endl;

    cout<<"mini is empty? "<<mini.empty();
    //not right , check twicely....

}