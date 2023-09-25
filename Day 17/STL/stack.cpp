#include<iostream>
#include<stack>
//last in first out
using namespace std;
int main(){
    stack<string>s;

    s.push("Shashwat");
    s.push("Pandey");
    s.push("Sabran");

    cout<<s.top()<<endl;
    s.pop();
    cout<<s.top()<<endl;

    cout<<"Size Of stack is "<<s.size();

    cout<<endl<<"Empty or not "<<s.empty();
    

}