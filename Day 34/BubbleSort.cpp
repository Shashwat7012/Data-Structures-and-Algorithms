#include<iostream>
using namespace std;

void SortArray(int *arr,int n){
    // base case :- 
    if(n==0 || n==1){
        return;
    }

    // 1st case :- largest element at the end.
    for(int i=0;i<n;i++){
        if(arr[i]>arr[i+1]){
            swap(arr[i],arr[i+1]);
        }
    }

    //relation
    SortArray(arr,n-1);
}

int main(){
    int arr[5] = {2,1,6,5,3};
    SortArray(arr,5);

    for(int i=0;i<5;i++){
        cout<<arr[i];
    }
    return 0;
}