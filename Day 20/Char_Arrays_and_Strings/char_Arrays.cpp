#include<iostream>
using namespace std;



int main(){
    char name[20];

    cout<<"Enter Your Name"<<endl;
    cin>>name;
    name[2] = '\0';
    // TO assign this use single quote.

    cout<<"Your name is ";
    cout<<name;

}