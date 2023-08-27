#include<iostream>
using namespace std;
int main(){
    float f;
    cin>>f;
    
    // T(°C) = (T(°F) - 32) × 5/9
    float c = (f-32.0)*5.0/9.0;
    cout<<c;
}