#include<iostream>
using namespace std;
int main(){

    int arr[5] = {23,122,41,67};
    //name of the operator represents the first block's address(1 element)
    cout<<"address of first memory block is "<<arr<<endl;

    //through & operator:-
    cout<<"address of first memory block is "<<&arr[0]<<endl;

    // *arr
    cout<<"vlaue is "<<*arr<<endl;

    // increment
    cout<<"incremented vlaue is "<<*arr + 1<<endl;

    // increment
    cout<<"incremented vlaue is "<<*(arr + 1)<<endl;

    //increment
    cout<<"incremented vlaue is "<<*(arr) + 1<<endl;

    //value printing
    cout<<"vlaue is "<<arr[2]<<endl;

    // value printing by pointer
    cout<<"value is  "<<*(arr +2)<<endl;

    // How internal things work
    // Formula :- arr[i] = *(arr + i);
    // same thing :- i[arr] = *(i + arr);

    // complex thing to take 
    int i =3;
    cout<<"Printing through i"<<i[arr]<<endl;

       
    cout<<"Printing through arr " <<arr[i]<<endl;

    //size of array
    cout<<"Size of array "<<sizeof(arr)<<endl;

    // size of pointer
    int *ptr = &arr[0];
    cout<<"Size of Pointer "<<sizeof(ptr)<<endl;

    // size of pointer
    
    cout<<"Size of Pointer "<<sizeof(*ptr)<<endl;

    cout<<"Size of Pointer "<<sizeof(&ptr)<<endl;

    cout<<"Size of Pointer "<<sizeof(&*ptr)<<endl;


    int a[10] = {1,2,3,4,5};
    cout<<&a[0]<<endl;
    cout<<&a<<endl;
    cout<<a<<endl;

    int *p = &a[0];
    cout<<p<<endl;
    cout<<*p<<endl;
    cout<<"Address at p "<<&p<<endl;

    int arrr[10];
    //  arrr = arrr +1; :- not possible
     cout<<arrr;

     int *ptrr = &arrr[0];
     ptr = ptr +1;
     cout<<ptr<<endl;

    



    

}