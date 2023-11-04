#include<iostream>
using namespace std;

int power(int base, int n){
    // base case
    if(n==0){
        return 1;
    }

    //recursive relation
    // small problem
    int SP = power(base, n-1);
    int BP = base * SP;
    return BP;
}


int main(){

    int base;
    cout<<"Input :- Base "<<endl;
    cin>>base;

    int n;
    cout<<"Input :- expo"<<endl;
    cin>>n;



    int ans = power(base,n);
    cout<<"Square root is :- ";
    cout<<ans<<endl;
}