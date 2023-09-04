#include<iostream>
using namespace std;

bool search(int arr[],int size, int key){
        for(int i=0;i<size;i++){
            if(arr[i]==key){
                return 1;
            }
        }
        return 0;
}

int main(){
    int arr[10] = {5,7,6,3,8,10,15,6,7,1};
     int key;
    cout<<"Enter the key"<<endl;
   
    cin>>key;

    bool found = search(arr,10,key);
    if(found){
        cout<<"Yes, it is present"<<endl;
    }
    else{
        cout<<"No, It is not present"<<endl;
    }
    //whether 1 is present in that or not.
}