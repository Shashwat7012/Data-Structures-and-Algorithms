class Solution {
public:
// Sieve of Eratosthenes :- In this we put cross mark of all multiple of
    int countPrimes(int n) {
     int count =0;
     vector<bool>prime(n+1, true);

     prime[0] = prime[1] = false;

     for(int i=2;i<n;i++){
         if(prime[i]){
             count++;

             for(int j=2*i;j<n;j = j+i){
                 prime[j]=0;
             }
         }
     }
     return count;
    }

};

// Complexity :- n/2 + n/3 + n/5 + n\7 + n\11;
// n(1/2 + 1/3 + 1/5 + 1/& + 1/11)
// complexity :- O(n*log(log n))
