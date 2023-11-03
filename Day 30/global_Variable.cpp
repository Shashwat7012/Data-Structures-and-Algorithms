#include<iostream>
using namespace std;

//local variable :- life span is in a block
// global variable
int score = 15;

void a(int i){
    cout<<i<<endl;
    score += 1;

    cout<<score<<" in a "<<endl;
    // It make a copy not same memory
    // b(i);

}

// void b(int &i){
//     cout<<i<<endl;

// }

int main(){
        cout<<" score in main "<<score<<endl;
        int i=5;
        a(i);
}