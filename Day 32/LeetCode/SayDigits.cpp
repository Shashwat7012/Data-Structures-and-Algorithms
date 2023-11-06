#include<iostream>
using namespace std;
void SayDigits(int n, string arr[]){
    // base case 
    if(n==0){
        return;
    }
    // processing
    int digit = n%10;
    n = n/10;

    // cout<<arr[digit]<<" "<<endl;
    // It will print vice-versa

    //recusrisve call
    SayDigits(n,arr);

    cout<<arr[digit]<<" "<<endl;


}

int main(){

    string arr[10] = {"Zero" ,"One", "Two", "Three", "Four", "Five", "Six", "Seven", "eight", "Nine"};

    int n;
    cin>>n;

    SayDigits(n ,arr);
}