#include<iostream>
using namespace std;
//copying a pointer.
int main(){
    int num =5;
    int i = 3;
    int *p = &num;
    int *q = p;
    cout<<*q<<endl;

    //concept
    // int *t = &i;
    // (*t)++;
    // // *t = *t+1;
    // // cout<<*t<<endl;
    // cout<<*t<<endl;

    //but if t = t+1; then? :- It will go to next interger because int stores 4 byte. it will go to ( add + 4byte);

    int *t = &i;
    *t = *t +1;
    cout<<"before "<<*t<<endl;
    cout<<"before "<<t<<endl;

    t  = t+1;
    // *t = *t+1;
    // cout<<*t<<endl;
    cout<<*t<<endl;
    cout<<t<<endl;


    
}