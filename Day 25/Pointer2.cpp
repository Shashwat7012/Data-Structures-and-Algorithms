#include<iostream>
using namespace std;
int main(){
    //pointer to int is created and pointing to some garbage address.
    // Dont use bcz, it is possible that there is read only memory in this and there it is too dangerous.

    // int *p;
    
    // so at starting put null pointer.
    // int *p = 0;
    
    // cout<<*p<<endl;
    // print :- segmentation fault :- no memory exist;

    int i=5;
    int *q = &i;
    cout<<*q<<" address is "<<q<<endl;


    int *p = 0;
    p=&i; // address of operator

     cout<<*p<<" address is "<<p<<endl;

     if(*p==*q){
        cout<<"Matched";
     }
     else{
        cout<<"Not Matched";
     }






}