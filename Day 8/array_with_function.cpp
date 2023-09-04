#include<iostream>
using namespace std;

void printArray(int arr[], int size){
    cout<<"Printing the array";
    for(int i=0;i<size;i++){
        cout<<arr[i]<<endl;
    }
    cout<<"Print OK!!"<<endl;
}

void charPrintArray(char ch[],int size){
    cout<<"Printing the characters";
    for(int i; i<size; i++){
        cout<<ch[i]<<endl;
    }
    cout<<"Ok";
}

int main(){
    int array[] = {2,7};
    // int n = 15;
    printArray(array,2);

    int arr4[5] = {1,2,3,4,5};
    printArray(arr4,5); 

     char ch[5] = {'a','b','c','d'};
        charPrintArray(ch,5);


}