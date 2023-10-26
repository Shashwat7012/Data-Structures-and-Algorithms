#include<iostream>
using namespace std;
int main(){
    int num = 5;
// address of operator :- &

    cout<<"address of num is "<<&num<<endl;

    int *ptr = &num;
    cout<<"value is "<<*ptr<<endl;

    cout<<"value is "<<ptr<<endl;

    double d =4.3;
    double *p = &d;
    cout<<" value of d is "<<*p<<endl;

    cout<<"Size of integer is "<<sizeof(num)<<endl;
    cout<<"Size of pointer is "<<sizeof(ptr)<<endl;
    cout<<"Size of pointer is "<<sizeof(p)<<endl;


    // cout<<num;
}