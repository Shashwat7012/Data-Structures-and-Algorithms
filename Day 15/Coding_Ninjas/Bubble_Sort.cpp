#include<iostream>
using namespace std;

void bubblesort(int arr[], int n){
                for(int i =1; i<n; i++){
                    //optimize
                    bool swapped = 0;
                    // for(int j = 0; j<n-1; j++){
                        // optimize
                        for(int j = 0; j<n-i; j++){
                        if(arr[j]>arr[j+1]){
                            swap(arr[j],arr[j+1]);
                            swapped =1;
                        }
                    }
                    if(swapped == 0){
                        break;
                    }
                }
    }

    int main(){
        int arr[5] = {6 ,2, 8, 4, 10};
        int n = 5;
        bubblesort(arr,n);
        for(int i =0; i<n; i++){
            cout<<arr[i]<<" ";
        }
    }