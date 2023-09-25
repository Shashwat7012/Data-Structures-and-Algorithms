// map :- It is a type of data-structure in which data is stored in the form of 
// key - value
//key is unique always.
//one key points only one value always.
#include<iostream>
#include<map>
// returns sorted elements in any case but not in unordered map.
// implementation is through red-black tree or balanced tree;
//complexity :- O(logn);
// complexity of unordered map :- O(1), implementation is through hash-table.
using namespace std;
int main(){
    map<int,string> m;

    m[1] = "Shashwat";
    m[2] = "Pandey";
    m[13] = "Sabran";

    //Second method to insert :-
    m.insert({5,"Kumar"});
    cout<<"before erase"<<endl;
    for(auto i:m){
        cout<<i.first<<" "<<i.second<<endl;
    }
    //count
    cout<<"13 is present or not:- "<<m.count(13);

    cout<<endl<<"after erase"<<endl;
    m.erase(13);
        for(auto i:m){
        cout<<i.first<<" "<<i.second<<endl;
    }
    //count
    cout<<"13 is present or not:- "<<m.count(13);

    //find
    cout<<endl<<"find :- 5 "<<endl;
    auto it = m.find(5);
    for(auto i = it;i!=m.end();i++){
        cout<<(*i).first<<endl;
    }



}