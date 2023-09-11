#include<iostream>
using namespace std;

int firstOcc(int arr[],int n, int key)
{
    int s = 0;
    int e = n-1;
    int mid = s+(e-s)/2;
    int ans = -1;

    while(s<=e){
        if(arr[mid] == key){
            ans = mid;
            e = mid-1;

        }
        else if(arr[mid]<key){
            //right
            s=mid+1;

        }
        else if(arr[mid]>key){
            e=mid-1;

        }
        mid = s+(e-s)/2;
    }
    return ans;
}

int LastOcc(int arr[],int n, int key)
{
    int s = 0;
    int e = n-1;
    int mid = s+(e-s)/2;
    int ans = -1;

    while(s<=e){
        if(arr[mid] == key){
            ans = mid;
            s = mid+1;

        }
        else if(arr[mid]<key){
            //right
            s=mid+1;

        }
        else if(arr[mid]>key){
            e=mid-1;

        }
        mid = s+(e-s)/2;
    }
    return ans;
}

int main(){
    int even[9] = {1,2,3,3,3,3,3,3,5};

    cout<<"first Occurance of 3 is at index "<<firstOcc(even,9,3)<<endl;
    cout<<"Last Occurance of 3 is index "<<LastOcc(even,9,3)<<endl;

}