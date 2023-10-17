// hold
#include<iostream>

using namespace std;

char getMaxOcc(string s){
    int arr[26] ={0};
    for(int i=0;i<s.length();i++){
        char ch = s[i];
        //lower case
        int number =0;
        if(ch>='a' && ch<='z'){
            number = ch - 'a';
        }
        //uppercase
        else{
               number = ch - 'A';
            
        }
        arr[number]++;
    }
}


int main(){

}