#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;

    int i=2;

    while(i<n){
    // n = n%i;

    if(n%i==0)
    {
        cout<<"No,It is not a prime number"<<i<<endl;
    } 

    else
    {
        cout<<"Yes, It is a prime number"<<i<<endl;
    }

    i=i+1;
    }

}