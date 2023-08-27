#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    
    int i;
    while(i<=n){
        int j=1;
        while(j<=i){
            char a= 'A'+i-1;
            cout<<a;
            j=j+1;
        }
        cout<<endl;
        i=i+1;
    }
}