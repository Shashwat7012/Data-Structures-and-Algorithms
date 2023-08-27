#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    if(n>0){
        cout<<" n is positive";
    }
    // else{
    //     if(n==0){
    //         cout<<" n is equal to 0";
    //     }
    //     else{
    //         cout<<" n is negetive";
    //     }
    // }
    else if(n==0){
        cout<<" n is equal to zero";
    }
    else{
        cout<<" n is negetive";
    }
    return 0;
}