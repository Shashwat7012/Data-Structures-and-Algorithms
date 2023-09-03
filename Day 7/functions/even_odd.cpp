#include<iostream>
using namespace std;

//1 -> Even
//0 -> Odd
int iseven(int num){
    return num%2 == 0;
}

int main(){
    int n;
    cin>>n;

    if (iseven(n)){
        cout<<"Even";
    }
    else {
         cout<<"Odd";
    }


}