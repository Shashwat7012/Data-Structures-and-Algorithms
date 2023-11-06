class Solution {
public:
    int climbStairs(int n) {
        //recursion
        // base case 

        if(n < 0){
            return 0;
        }
        if(n == 0){
            return 1;
        }
        if(n==1){
            return 1;
        }

        // recursive relation
        // int ans = climbStairs(n-1) + climbStairs(n-2); :- Shows TLE

        int i=1, j=1;

        for (int k=2;k<=n;k++){
            int temp = j;
            j = i +j;
            i = temp;
        }


        return j;
    }
};