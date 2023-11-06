// fibonacci number
#include<iostream>
using namespace std;

int fib(int n){
    // base case
    if(n==0){
        return 0;
    }
    if(n==1){
        return 1;
    }

    //recurise function
    int f = fib(n-1) + fib(n-2);
    return f;
}

int main(){

    int n;
    cin>>n;

   int a = fib(n);
   cout<<a;

}