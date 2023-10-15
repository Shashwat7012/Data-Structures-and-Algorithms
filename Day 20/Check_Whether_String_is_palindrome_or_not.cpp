#include<iostream>
using namespace std;

int getLength(char a[]){
    int count=0;
    for(int i=0;a[i]!='\0';i++){
        count++;
    }
    return count;
}

bool palindrome(char a[],int n){
    int s=0;
    int e=n-1;
    while(s<e){
        if(a[s]!=a[e]){
            return 0;
        }
        else{
            s++;
            e--;
        }
        
    }
    return 1;

}

int main(){
    //palindrome
    char a[20];
    cout<<"Enter something"<<endl;
    cin>>a;
    int length = getLength(a);
    
    cout<<"Palindrome or not :- "<<palindrome(a,length);

}