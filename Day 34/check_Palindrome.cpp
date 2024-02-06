#include<iostream>
using namespace std;
//Loops :- done
//recursion

bool ispalindrome(string str,int i,int j){
   if(i>j){
    return true;
   }

   if(str[i]!=str[j]){
    return false;
   }
   else{
    return ispalindrome(str,i+1,j-1);
   }
}



int main(){

        string name = "aba";
        cout<<endl;

    bool palindrome = ispalindrome(name,0,name.length()-1);

    if(palindrome){
        cout<<"Yes , It is a palindrome"<<endl;
    }
    else{
       cout<<"Not a palindrome"<<endl;
    }
}