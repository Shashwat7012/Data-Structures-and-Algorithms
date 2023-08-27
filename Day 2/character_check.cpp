#include<iostream>
using namespace std;
int main(){
    char a;
    cin>>a;
    if(a>='a'&&a<='z'){
        cout<<"small char";
    }
    else if(a>='A'&&a<='Z'){
        cout<<"Big char";
    }
    else{
        cout<<" It's a number";
    }
}