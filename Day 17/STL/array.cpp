#include<iostream>
//array
#include<array>
using namespace std;

int main(){
    // it is a normal array.
    int basic[3] = {1,2,3};

    // we have to include array's library
    array<int,4> a = {1,2,3,4};
    // It is just like upper array and static array and not used in competative programming.
    int size = a.size();
    for(int i=0;i<size;i++){
        cout<<a[i]<<endl;
    }

    // We can use at operation in that;
    cout<<"Element at 2nd index:- "<<a.at(2)<<endl;
    
    //a.empty :- checks empty or not return bool in that.
    cout<<"Empty or not:- "<<a.empty()<<endl;

    //first element
    cout<<"first element "<<a.front()<<endl;

    //last element
    cout<<"last element "<<a.back()<<endl;


}