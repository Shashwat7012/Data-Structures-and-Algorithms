#include<iostream>
using namespace std;
//hold
void printarray(){

}

int main(){

    //declare
    int num[15];
    //accessing of array
    cout<<"value at 14th index is "<<num[14]<<endl;

    //    cout<<"value at 20th index is "<<num[20]<<endl;

    //initilizing an array
    int a[3] = {5,6,7};
     cout<<"value at 2nd index is "<<a[2]<<endl;

     int b[15] = {2,7};
        int n=15;

        //print array
      for(int i=0; i<n; i++){
        cout<<b[i]<<endl;
      }

        int c[10]={0};
        for(int i = 0;i<10;i++){
            cout<<c[i]<<endl;
        }


        int d[5]={1};
        for(int i = 0;i<5;i++){
            cout<<d[i]<<endl;
        }


        //size of()

        int d_size = sizeof(d)/sizeof(int);
        cout<<d_size<<endl;

        //if the actual size of array is large but we put less element and we 
        // have to find size
        //(We cannot find that)

        char ch[5] = {'a','b','c','d'};
        for(int i =0; i<5; i++){
            cout<<ch[i]<<" "<<endl;
        }

        

    cout<<"OK!!"<<endl;

    return 0;
}