#include<iostream>
using namespace std;

int OnetoN(int *arr, int size)
{
    // base case
    if(size==0){
        return 0;
    }
    

    // relation
   

    return arr[0] + OnetoN(arr+1,size-1);
}

int main(){
    int arr[5];
    int size = 5;
    for(int i=0;i<5;i++){
        cin>>arr[i];
    }

    cout<<OnetoN(arr,size);
}