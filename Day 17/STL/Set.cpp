#include<iostream>
#include<set>
//remove duplicates
// behind the scene :- BST is used :- no modification :- insert another or delete it.
//elements return in sorted oreder.

//Difference b/w set and unordered set is :- 
// Set is slower then unordered set :- element not returns in sorted order.
using namespace std;

int main(){
    set<int>s;
    

    s.insert(1);
    //complexity:-  O(logn) :- insert :- according to bst.
    s.insert(3);
    s.insert(3);
    s.insert(6);
    s.insert(5);

    for(auto i : s){
        cout<<i<<" ";
    }cout<<endl;

    //erase
    // set<int>:: iterator it = s.begin();
    // it++
    // s.erase(it);
    //  for(auto i : s){
    //     cout<<i<<" ";
    // }
// mistake


//count :- checks that element is present or not.
cout<<"10 is present or not"<<endl;

cout<<s.count(10)<<endl;

//find:- if element found then it will return its iterator.
set<int>::iterator itr = s.find(5);

for(auto it=itr;it!=s.end();it++){
    cout<<it<<" ";
}
//mistake

}