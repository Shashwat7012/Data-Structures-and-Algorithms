#include<iostream>
using namespace std;
int main(){
    int arr[10] = {1,2,3,4,5};
    char ch[6] = "abcde";
    cout<<arr<<endl;

    //attention :- The behaviour of cout<< for charcter arrays is different
    cout<<ch<<endl;

    // prinitng the values at ch;
    char *c = &ch[1];
    cout<<ch<<endl;

    char temp = 'z';
    char *p = &temp;
     cout<<p<<endl;

        char *c = &ch[1];
    cout<<ch<<endl;




    return 0;

}