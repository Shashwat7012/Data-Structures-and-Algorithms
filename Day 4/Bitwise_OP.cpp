#include<iostream>
using namespace std;
int main(){
    int a = 4;
    int b = 6;
    cout << "a & b = " << (a & b) << endl;
    cout << "a | b = " << (a | b) << endl;
    cout << "a ~ b = " << ( ~ a) << endl;
    cout << "a ^ b = " << (a ^ b) << endl;

}
// And(&), OR(|), NOT(~), XOP(^)
//  AND :- Double 1 :- 1
// OR :- Single 1 :- 1
// Not :- one to zero , zero to one
// XOR :- Double one and double zero is zero