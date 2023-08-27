#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    
    int i=1;
    while(i<=n){
        int j = 1;
        //easy way
        char a = 'A'+n-i;
        while(j<=n){
            // char a ='A'+i+j-2;

            //easy
            cout<<a;
            a=a+1;
            j=j+1;
        }
        cout<<endl;
        i=i+1;
    }
}