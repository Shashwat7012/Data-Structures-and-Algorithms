#include<iostream>
using namespace std;

//Pivot Element
int getPivot(int arr[],int n){
    int s=0;
    int e=n-1;
    int mid = s+(e-s)/2;

    while(s<e){
        if(arr[mid]>=arr[0]){
            s=mid+1;
        }

        else{
            e=mid;
        }
        mid = s+(e-s)/2;
    }
    return s;
}

int binarySearch(int arr[],int s,int e,int key){
    int start = s;
    int end = e;
    int mid = s+(e-s)/2;

    while(start<end){
        if(arr[mid]==key){
            return mid;

        }
        else if(arr[mid]>key){
            end = mid-1;
        }
        else if(arr[mid]<key){
            start = mid +1;
        }
        mid = start+(end-start)/2;
    }
    return -1;
}




int main(){
    int arr[5] = {7,9,1,2,3};
    int k;
    cout<<"Enter the value of k";
    cin>>k;
    int pivot = getPivot(arr,5);
    if(k>=arr[pivot] && k<=arr[4]){
        cout<<binarySearch(arr,pivot,4,k);
    }
    else{
        cout<<binarySearch(arr,0,pivot,k);
    }
}