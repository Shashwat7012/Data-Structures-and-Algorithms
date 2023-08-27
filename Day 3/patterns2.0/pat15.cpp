#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;

    int i=1;
    while(i<=n){
        int j=1;
        while(j<=i){
            char a  = 'A'+i+j-2;
            cout<<a;
            j=j+1;
        }
        cout<<endl;
        i=i+1;
    }
}