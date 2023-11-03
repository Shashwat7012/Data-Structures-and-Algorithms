#include<iostream>
using namespace std;

// void func(int a, int b)
// {
//     a++;
//     b++;
//     cout<<a<<" "<<b<<endl;
// }
// int getMax(int a,int b){
    // using ref. variable
// int getMax(int &a,int &b){

//     return (a>b) ? a : b;
// }


//using inline function
inline int getMax(int &a,int &b){

    return (a>b) ? a : b;
}
int main(){
    // int a = 10, b = 15;
    
    // func(a,b);
    int a =1, b=2;
    int ans = 0;
    // if(a>b){
    //     ans = a;
    // }else{
    //     ans = b;
    // }
    // cout<<a;

    //tertiory operator

    // ans = (a>b) ? a : b;
    
    // a = a+3;
    // b = b+1;

    //   ans = (a>b) ? a : b;

      // Dont use :- readibility issue. :- Use functions

      ans = getMax(a,b);
    cout<<"before "<<ans<<endl;
    a = a+3;
    b = b+1;

      ans = getMax(a,b);
    cout<<"after "<<ans<<endl;



      // Dont use becuse too many copies are creating we we call functions.


}