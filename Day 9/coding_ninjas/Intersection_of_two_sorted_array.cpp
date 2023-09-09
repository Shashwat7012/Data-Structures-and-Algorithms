#include <iostream>
#include <vector>
using namespace std;

vector<int> intersection(int arr1[], int n, int arr2[], int m) {
    vector<int> ans;
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (arr1[i] == arr2[j]) {
                ans.push_back(arr1[i]);

                //update
                arr2[j]=-1;
                
                break; // Break the inner loop after finding a match in arr2
                
                
            }
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