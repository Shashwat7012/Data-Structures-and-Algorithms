#include<iostream>
using namespace std;
int main(){
    int num =5;

    int *p = &num;
    cout<<"before "<<num<<endl;
    (*p)++;
    cout<<"after "<<num;
}