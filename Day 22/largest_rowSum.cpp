#include<iostream>
using namespace std;

//to print sum row wise
// 1.
void printSum(int arr[3][4],int i, int j){
cout<<"Printing Sum of Rows "<<endl;

    for(int i =0;i<3;i++){
        int sum = 0;
        for(int j=0;j<4;j++){
            sum += arr[i][j];
            // cout<<endl;
        }
        cout<<sum<<" ";
    }
}

// 2.
// largest row sum
int largestrowSum(int arr[3][4],int i,int j){
    int maxi = INT_MIN;
    int rowindex = -1;

    for(int i =0;i<3;i++){
        int sum = 0;
        for(int j=0;j<4;j++){
            sum += arr[i][j];
            // cout<<endl;
        }
        if(sum > maxi){
            maxi =sum;
            rowindex = i;
        }

    }
    // cout<<"the maximum sum is "<<maxi<<endl;
    return rowindex;

}



int main(){
    int arr[3][4];

    cout<<"Enter the values"<<endl;

    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            cin>>arr[i][j];
        }
    }

    cout<<"Printing the values"<<endl;
    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            cout<<arr[i][j];
        }
    }
    cout<<endl;
    // printSum(arr,3,4);

    cout<<"Max row is at index "<<largestrowSum(arr,3,4)<<endl;

}