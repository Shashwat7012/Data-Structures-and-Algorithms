#include <bits/stdc++.h> 
vector<int> wavePrint(vector<vector<int>> arr, int nRows, int mCols)
{
    vector<int>ans;
    for(int col=0;col<mCols;col++){
        //check index is odd or even

        // odd
        // if(col&1){
            if(col%2!=0){
            //bottom to top
            for(int row= nRows-1; row>=0; row--){
                // cout<<arr[row][col]<<" ";
                 ans.push_back(arr[row][col]);
            }
           
        }
        //even
        else{
            // 0 and even :- top to bottom
             for(int row= 0; row<=nRows-1; row++){
                // cout<<arr[row][col]<<" ";
                 ans.push_back(arr[row][col]);
            }
             
        }
    }
    return ans;
}