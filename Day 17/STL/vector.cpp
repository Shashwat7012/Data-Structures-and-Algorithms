#include<iostream>
#include<vector>
using namespace std;

// if size increases then, it double its size.

int main(){
    //creation of vector. :- size = 0;
  vector<int>v;

// if size is already known
vector<int>a(5,1);
// 5:- size of vector
// 1:- initialize the the whole vector with one.

//printing a vector
for(int i:a){
    cout<<i<<" "<<endl;
  }

  //if we want to copy a in v, then
  vector<int>last(a);
  for(int i:last){
    cout<<"The merged one"<<endl;
    cout<<i<<" "<<endl;
  }


  cout<<"Capacity "<<v.capacity()<<endl;
  // capacity:- It tells how much capacity is assigned to elements;

  //To insert number:-
  v.push_back(1);
  cout<<"Capacity "<<v.capacity()<<endl;

v.push_back(2);
  cout<<"Capacity "<<v.capacity()<<endl;

  v.push_back(3);
  cout<<"Capacity "<<v.capacity()<<endl;

  v.push_back(4);
  cout<<"capacity "<<v.capacity()<<endl;

  v.push_back(5);
  cout<<"capacity "<<v.capacity()<<endl;
  cout<<"Size "<<v.size()<<endl;
  // size() :- tells :- how much elements present


  // Capaciy =  tells how much space is assigned.
  cout<<"Element at 2nd index "<<v.at(2)<<endl;

  //front-back operation:-
  cout<<"first element "<<v.front()<<endl;
  cout<<"last element "<<v.back()<<endl;

  //pop back

  cout<<"before pop"<<endl;
  for(int i :v){
    cout<<i<<" ";
  }cout<<endl;
//
  v.pop_back();
//
   cout<<"after pop"<<endl;
  for(int i :v){
    cout<<i<<" ";
  }cout<<endl;


// clear :- when we clear then its size becomes zero, not the capacity.

cout<<"before clear"<<endl;
  cout<<v.size()<<endl;

  cout<<"after clear"<<endl;
  //
  v.clear();
  //
  cout<<v.size()<<endl;

  



}