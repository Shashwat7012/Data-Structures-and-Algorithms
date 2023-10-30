// refrence variable :- same memory block but different name of the varible.

#include<iostream>
using namespace std;

void update1(int n){
    n++;
}

void update2(int& n){
    n++;
}

int & func(int a){
    int num = a;
    int &ans = num;
    return ans;
}



int main(){
    // int i=5;

    // int &j = i;

    // j++;

    // cout<<j<<endl;

    // cout<<i<<endl;
    int i =5;
    cout<<"before "<<i<<endl;
    // update(i);
    update2(i);
    // func(i); // bad practise
    cout<<"after "<<i<<endl;
}