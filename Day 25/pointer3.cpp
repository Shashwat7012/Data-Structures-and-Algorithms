#include <iostream>
using namespace std;

int main() {
    // Declare an integer variable 'num' and initialize it to 5.
    int num = 5;

    // Declare an integer pointer 'p' and assign it the address of 'num'.
    int *p = &num;

    // Declare an integer variable 'a' and initialize it with the value pointed to by 'p'.
    int a = *p;

    // Increment the value of 'a'.
    a++;

    // Print the value of 'num'.
    cout << num << endl;

    return 0; // Added to end the main function and return a value.


     // int num = 5;
    // int a = num;
    // a++;
    // cout<<num<<endl;
    // cout<<a<<endl;
    // output :- 5
             //  6
}
