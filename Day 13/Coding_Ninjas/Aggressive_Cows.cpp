#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
//complete it




bool isPossible(vector<int> &stalls, int k,int mid){
    int cowCOunt = 1;
    int lastPos = stalls[0];

    for(int i=0;i<stalls.size();i++){
        if(stalls[i]-lastPos >= mid){
            cowCOunt ++;
            if(cowCOunt == k){
                return k;
            }
            lastPos = stalls[i];
        }
    }
    return false;
}



int main(vector<int> &stalls, int k)
{
    sort(stalls.begin(),stalls.end());
    int s=0;

    int maxi = -1;
    for(int i=0; i<stalls.size();i++){
        maxi = max(maxi,stalls[i]);
    }
    int e = maxi;
    int ans = -1;
    int mid = s + (e-s)/2;

    while(s<=e){
        if(isPossible(stalls,k,mid)){
            ans= mid;

            s = mid+1;
            //for largest solution
        }
        else{
            e = mid-1;
        }
        mid  = s + (e-s)/2;
    }
    return ans;
}