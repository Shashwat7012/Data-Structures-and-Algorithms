#include<iostream>
using namespace std;
int getMin(int num[],int n){
    int min = INT_MAX;

    for(int i = 0;i<n; i++){
        // mini = min(mini,num[i]);
        if(num[i]<min){
            min = num[i];
        }
    }
    return min;
}


int getMax(int num[],int n){
    int max = INT_MIN;
    for(int i =0; i<n; i++){

        // we have pre defined function is here for that
        if(num[i]>max){
            max = num[i];
        }
        // maxi = max(maxi,num[i]);

    }
    return max;
}

int main(){

    int size;
    cin>>size;


// taking input in array
    int num[100];
    for(int i=0; i<size; i++){
        cin>>num[i];
    }

    cout<<"Maximum Value is "<<getMax(num, size)<<endl;
    cout<<"Minimum Value is "<<getMin(num, size)<<endl;
}