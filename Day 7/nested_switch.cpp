#include<iostream>
using namespace std;
int main(){
    int num = 1;

    // char ch = '1';

    char ch = '1';
    //we cannot put float and string in case.
    switch (ch){
        case 1: cout<<"First"<<endl;
        break;

        case '1': switch(num){
            case 1:cout<<"It is a integer"<<endl;
            break;
            // continue;
            // Falling through is the standard behavior for a switch statement and so, consequently, using continue in a switch statement does not make sense. The continue statement is only used in for/while/do..while loops.
            

            default: cout<<"It is a default case"<<endl;
        }
        break;

        default : cout<<"It is a default case"<<endl;
    }
}