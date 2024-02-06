#include<iostream>
using namespace std;
//loops :- done
//recursion :- 
void reverse(string &str,int i, int j ){
    // base case
    cout<<"call recieved for "<<str<<endl;
    if(i>j){
        return;
    }
    swap(str[i],str[j]);
    i++;
    j--;
    // recursive call
    reverse(str,i,j);
    
}

int main(){
    string name = "shashwat";

    reverse(name,0,name.length()-1);
    
    cout<<name;
    return 0;

}