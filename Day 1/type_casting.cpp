#include<iostream>
using namespace std;
int main(){
    int a = 'a';
    cout<<a<<endl;

    char b = 98;
 
    cout<<b<<endl;

       // so max value of int is 2 raise to pow 32 -1 and for char 2 raise to pow 8 -1 then what will 
    // happen if 2 raise to pow 16 convert into char
    
    char ch = 12345645699774656;
    cout<<ch<<endl;

    // unsigned int :- It will store only +ve values.
    unsigned int  un = -112;
    cout<<un<<endl;
// using relational operators
    int c = 2;
    int d = 3;
     bool first = c==d;
     cout<<first<<endl;

     bool sec = c<d;
     cout<<sec<<endl;

     bool third = c>d;
     cout<<third<<endl;

     bool frth = c<=d;
     cout<<frth<<endl;

     bool ffth = c>=d;
     cout<<ffth<<endl;

     bool six = c!=d;
     cout<<six<<endl;

     //logical op.
     //!
     int g = 5;
     cout<<!g<<endl;


}