#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"Enter the value of A"<<endl;
    cin>>a;

    cout<<"Enter the value of B"<<endl;
    cin>>b;

    int op;
    cout<<"Enter operator"<<endl;
    cout<<"1 : Add"<<endl;
    cout<<"2 : Subtract"<<endl;
    cout<<"3 : Multiplication"<<endl;
    cout<<"4 : Divide"<<endl;
    cout<<"5 : Modulus"<<endl;
    cin>>op;

    int ans;

    switch(op){
        case 1:
        cout<<"Adding"<<endl;
        ans = a+b;
        cout<<ans<<endl;
        break; 

        case 2:
        cout<<"Subtracting"<<endl;
        ans = a-b;
        cout<<ans<<endl;
        break; 

        case 3:
        cout<<"Multiply"<<endl;
        ans = a*b;
        cout<<ans<<endl;
        break; 

        case 4:
        cout<<"Divide"<<endl;
        ans = a/b;
        cout<<ans<<endl;
        break; 

        case 5:
        cout<<"Modulus"<<endl;
        ans = a%b;
        cout<<ans<<endl;
        break;

        default : cout<<"Invalid number or Operator";  
    }
    return 0;
}