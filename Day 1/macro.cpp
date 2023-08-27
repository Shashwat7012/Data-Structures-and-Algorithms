#include<iostream>
using namespace std;
int main(){
    // macros
    // #define Limit 5
    // for(int i=0; i<=Limit;i++){
    //     cout<<i;
    // }
    // return 0;

    //we can give arguments to macros
    #define Area(l,b) (l*b)

    int l,b,a;
    cin>>l;
    cin>>b;
    a=l*b;
    cout<<a;



}