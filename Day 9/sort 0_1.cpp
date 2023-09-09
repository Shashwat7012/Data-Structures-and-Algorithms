#include<iostream>
using namespace std;

void printArray(int arr[],int n){
        for(int i=0;i<n;i++){
            cout<<arr[i]<<" ";

        }cout<<endl;
    }

    void sortOne(int arr[],int n){
        int i = 0, j = n-1;

        // int step = 0;

        while(i<=j){
            // cout<<"step"<<step++<<endl;
            printArray(arr,n);
            while(arr[i]==0){
                i++;
            }
            while(arr[j]==1){
                j--;
            }
            // if we are here :- bcz
            //arr[i]==1 and arr[j]==0
            if(arr[i]==1 && arr[j]==0 && i<=j)
            swap(arr[i],arr[j]);
            i++;
            j--;
        }
        // cout<<"returning from sorted array ";
        // printArray(arr,8);
    }
    


int main(){
    
    int arr[8] ={1,1,0,0,0,0,1,1};
    //two pointer
    sortOne(arr,8);
    // cout<<"Printing after a function call ";
    // printArray(arr,8);
}