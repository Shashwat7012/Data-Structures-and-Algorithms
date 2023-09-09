#include<iostream>
using namespace std;

int duplicate(int arr[],int n){
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]==arr[j])
            {
                return arr[i];
            }
        }
    }
    return -1;
}


int main(){
    int arr[5] = {1,2,3,4,2};
    cout<<duplicate(arr,5);
    
}