#include<iostream>
using namespace std;
void print(int *p){

    cout<<p<<endl;
    cout<<*p<<endl;
    cout<<*p +1<<endl;


}

void update(int *p){
    p = p+1;
    cout<<"inside "<<p<<endl;
    
}

int getsum(int arr[],int n){
    // when we pass array in functions then in behind the scenes the 
    // array is passed, the pointer is passed.
    // benifit :- part of array can be send or passed;


    cout<<"Size is "<<sizeof(arr)<<endl;
    // size is 8 because it return pointer size
    int sum = 0;
    for(int i=0;i<n;i++){
        sum += arr[i];
        //  it is also fine;
        // sum += i[arr];
    }
    return sum;
}



int main(){
    int value = 5;
    int *p = &value;

    // print(p);
    cout<<"Before "<<p<<endl;

    update(p);
    cout<<"After "<<p<<endl;



    int arr[6] = {1,2,3,4,5,8};
   cout<<"Sum "<< getsum(arr,5)<<endl;

   cout<<"Sum "<< getsum(arr+3,5)<<endl;

   


    return 0;
}