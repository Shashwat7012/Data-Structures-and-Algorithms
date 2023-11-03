#include<iostream>
using namespace std;

void print(int arr[], int n, int start = 0){
    // int start= 0 , this is default argument.
    
    for(int i=start;i<n;i++){
        cout<<arr[i]<<endl;
    }
}

int main(){

    int arr[5] = {1,2,3,4,5};
    int size = 5;
    print(arr,size);
    // when we dont pass the start position then its totally default case which depend on the compiler.
    // if start is there then its ok. but else it is not present then print from strat.
    cout<<"Not using default Case :- "<<endl;
    print(arr,size,3);
}