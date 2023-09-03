#include<iostream>
using namespace std;

int pow(int a, int b){
    int ans = 1;
    for(int i=1;i<=b;i++){
        ans = ans * a;
    }
    return ans;
}


int main(){
    int c,d;
    cin>>c>>d;
  int ans =   pow(c,d);
  cout<<ans<<endl;

  
     int e,f;
     cin>>e>>f;
     int answer = pow(e,f);
     cout<<answer<<endl;
}
