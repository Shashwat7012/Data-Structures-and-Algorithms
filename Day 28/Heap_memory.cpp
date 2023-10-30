#include<iostream>
#include<algorithm>
#include<math.h>
using namespace std;


int getsum(int arr[],int n)
// int getsum(int *arr,int n){ :- It is also right

{
   int sum =0;
   for(int i=0;i<n;i++){
    sum += arr[i];
   }
   return sum;
}
int main(){

    char ch = 'a';
    cout<<sizeof(ch)<<endl;

    char *c = &ch;
    cout<<sizeof(c)<<endl;

    int n;
    cin>>n;
    // variable size memory throgh pointer in Heap memory.
    // rule to get into heap = "new memory";


    int * arr = new int[n];

    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    // calling function
   int ans =  getsum(arr,n);

    cout<<"answer is "<<ans<<endl; 

// case :- 1
    while(true){
        int i=5;
    }

// case :-2
    while(true){
        int *ptr = new int;
    }  
   

}