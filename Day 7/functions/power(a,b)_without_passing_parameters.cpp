#include<iostream>
using namespace std;

int pow(){
    int a,b;

    cin>>a>>b;
    
    int ans = 1;

    for(int i=1;i<=b;i++)
    {
        ans = ans * a;
    }

    return ans;
}


int main(){
    int ans = pow();
    cout<<ans<<endl;

    int ans2 = pow();
    cout<<ans2<<endl;

    int ans3 = pow();
    cout<<ans3<<endl;
}
