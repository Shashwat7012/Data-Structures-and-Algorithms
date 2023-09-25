//In Double Ended Queue :- We can do the both operation pop and push at the starting or ending position.

// :- Insertion and deletion at the begining and at the ending.

//Deque(Deq):- There is multiple fixed static array and they track that the data present in which array.

// use array :- It is dynamic

#include<iostream>
#include<deque>
using namespace std;
int main(){


    //create deq
    deque<int>d;
    // push from back
    d.push_back(1);
    // push from front
    d.push_front(2);

    for(int i:d){
        cout<<i<<" ";
    }
    cout<<endl;


    // // pop from back
    // cout<<endl;
    // cout<<"Popped deq"<<endl;
    // d.pop_back();
    // for(int i:d){
    //     cout<<i<<" ";
    // }




     // pop from front
    // cout<<endl;
    // cout<<"Popped deq"<<endl;
    // d.pop_front();
    // for(int i:d){
    //     cout<<i<<" ";
    // }


    cout<<"Print first indexed element"<<endl;
    cout<<d.at(0)<<endl;

    //front 

       cout<<"first element"<<endl;
    cout<<d.front()<<endl;


    //end

       cout<<"last element"<<endl;
    cout<<d.back()<<endl;

    //empty or not
    cout<<"Empty or not :- "<<d.empty()<<endl;


    // erase:-
    d.erase(d.begin(),d.begin()+1);
    cout<<"Size after erase = "<<d.size();


}


