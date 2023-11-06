#include <bits/stdc++.h> 
int countDistinctWays(int nStairs) {
    // //recursion

    // //base case 
    // if(nStairs<0){
    //     return 0;
    // }
    // if(nStairs == 0){
    //     return 1;
    // }

    // //Recusive call

    // int ans = countDistinctWays( nStairs - 1)
    //  + countDistinctWays( nStairs - 2);
     
    // return ans;
      //recursion
        // base case 

        if(nStairs < 0){
            return 0;
        }
        if(nStairs == 0){
            return 1;
        }
        if(nStairs==1){
            return 1;
        }

        // recursive relation
        // int ans = climbStairs(n-1) + climbStairs(n-2); :- Shows TLE

        int i=1, j=1;

        for (int k=2;k<=nStairs;k++){
            int temp = j;
            j = i +j;
            i = temp;
        }


        return j;
    }
