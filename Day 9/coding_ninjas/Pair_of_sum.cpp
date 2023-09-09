#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

vector<int> pair1(int arr[], int n, int digit) {
    vector<int> ans;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]+arr[j]==digit){
                vector<int> temp;
            temp.push_back(min(arr[i],arr[j]));
            temp.push_back(max(arr[i],arr[j]));
                ans.push_back(arr[i]);
            }
        }
        // if this is triplet then 3 loops will be there and k=k+1;
        // see the sorting order.

    
}
sort(ans.begin(),ans.end());
return ans;
}

int main(){
    int arr[6] = {5,2,8,5,3,7};
    // cout<<pair1(arr,6,10);
    int digit = 10;
    vector<int> final = pair1(arr,6,digit);
    for(int i=0;i<final.size();i++){
        cout<<final[i];
    }
    return 0;
}
