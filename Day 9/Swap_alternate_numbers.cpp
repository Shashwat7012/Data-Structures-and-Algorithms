#include<iostream>
using namespace std;

void printArray(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }cout<<endl;
}

void swap(int arr[],int n){

    
    for(int i=0;i<n;i=i+2){
        if(i+1<n){
        swap(arr[i],arr[i+1]);
        }
    }

}
int main(){

    int even[8]={1,2,3,4,5,6,7,8};

    int odd[5]={11,33,19,6,12};

    swap(even,8);
    printArray(even,8);

    swap(odd,5);
    printArray(odd,5);
   
}