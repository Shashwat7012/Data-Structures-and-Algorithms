#include<iostream>
#include <vector>
using namespace std;


//hint :- sorted in decreasing order.

//two pointer approach.
vector<int> intersection(int arr1[], int n, int arr2[], int m) {
    vector<int> ans;
    int i=0;
    int j=0;
    while(i<n && j<m){
        if(arr1[i]==arr2[j]){
            ans.push_back(arr1[i]);
            i++;
            j++;
        }
        else if(arr1[i]>arr2[j]){
            j++;
        }
        else if(arr1[i]<arr2[j]){
            i++;
        }
        
    }
    return ans;
}

int main(){

      int  arr1[5] ={1,2,4,4,5};
      int arr2[5] = {1,4,8,9,10};
      vector<int> values = intersection(arr1,5,arr2,5);
        for(int i=0;i<values.size();i++){
            cout<<values[i]<<" ";
        }
}