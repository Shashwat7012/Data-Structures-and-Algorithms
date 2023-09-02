// see solution of leetcode 1009
//Compliment of base 10 integer.
#include<iostream>
using namespace std;
int main(){
        int n;
        int mask =0;
        //edge case
        if(n==0){
            return 1;
        }
        while(n!=0){
            mask = (mask<<1) | 1;
            n = n>>1;
        }
        int ans = (~n) & mask;
        return ans;
    }
