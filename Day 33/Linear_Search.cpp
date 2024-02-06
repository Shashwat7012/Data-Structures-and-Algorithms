#include<iostream>
using namespace std;

 bool  lSearch(int *arr,int size,int key){
    // base case
    if(size==0){
      return false;  
    }

    // recurrance relation
    if(arr[0]==key){
        return true;
    }
    else{
        bool remPart = lSearch(arr+1,size-1,key);
        return remPart;
    }
}

int main(){
    int arr[5];
    int size = 5;
    int key;
    

    for(int i=0;i<5;i++){
        cin>>arr[i];
    }
    cout<<"Enter the Key";
    cin>>key;

   bool ans =  lSearch(arr,size,key);
   if(ans){
    cout<<"Found";
   }
   else{
    cout<<"NOt Found";
   }
}