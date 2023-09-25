#include<iostream>
#include<queue>
//first in first out
using namespace std;
int main(){
queue<string>q;

    q.push("Pandey");
    q.push("Sabran");
    q.push("Shashwat");

    cout<<q.front()<<endl;
    q.pop();
    
    cout<<q.front()<<endl;
    // cout<<s.top()<<endl;

    // cout<<"Size Of stack is "<<s.size();

    // cout<<endl<<"Empty or not "<<s.empty();
}