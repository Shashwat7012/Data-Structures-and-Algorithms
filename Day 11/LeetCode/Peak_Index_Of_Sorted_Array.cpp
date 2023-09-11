// Peak Index of sorted array.{852}
#include<iostream>
using namespace std;

int peak(int arr[],int n){
   int s = 0; 
        int e =  n-1;
        int mid = s + (e-s)/2;
        while(s<e){
            if(arr[mid]<arr[mid+1]){
                s = mid+1;
            }
            else{
                e = mid;
            }
            mid = s + (e-s)/2;
        }
        return s;
    }




int main(){
    int arr[4] = {0,5,10,2};
    cout<<peak(arr,4);
}