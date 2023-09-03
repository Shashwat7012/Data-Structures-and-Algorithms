#include<iostream>
using namespace std;

bool isprime(int num){
    for(int i=2;i<num;i++){
        if(num%i == 0){
            return 0;
        }
    }
    return 1;
}

int main(){
    int n;
    cin>>n;
    if(isprime(n)){
        cout<<"is a Prime number";
    }
    else{
        cout<<"NOT a Prime number";
    }
}