// Number of 1 bits
// hint :- place a counter on the last of the bits , if it is one then use AND operator.then answer is 1 then print it.
#include<iostream>
using namespace std;
int main(){
    unsigned int n = 00000000000000000000000000001011;
   int counter = 0;
   //check last bit
    while(n!=0){
        if(n&1){
            counter++;
        }
       n=  n>>1;
    }
    cout<<counter;
}