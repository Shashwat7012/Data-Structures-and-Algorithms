#include<iostream>
using namespace std;

int getLength(char name[]){
    int count =0;
    for(int i=0; name[i]!='\0';i++){
        count++;

    }
    return count;
}

void reverse(char name[],int n){
    int s=0;
    int e=n-1;

    while(s<e){
        swap(name[s++], name[e--]);
        // swap(name[s],name[e]);
        // s++;
        // e--;
    }
}

int main(){
    // reverse
       char name[20];
     cout<<"Enter your name"<<endl;

    cin>>name;

    cout<<"Your name is ";
    cout<<name<<endl;

    int length = getLength(name);

     cout<<"Length of characters is "<<getLength(name)<<endl;


    cout<<"reversed name"<<endl;
    reverse(name,length);
    cout<<name;
}