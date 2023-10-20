// input....output...rowwise/colWise
#include<iostream>
using namespace std;

// tell number of col
bool ispresent(int arr[3][4], int target, int row, int col){

// linear Search like

     for(int row=0; row<3; row++){
       for(int col=0; col<4; col++){

           if(arr[row][col] == target){
            return 1;
           }

           }

    }
    return 0;
     }


int main(){
    // create 2-D array

    // 3.
    // int arr[3][4] = {1 ,2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};

    // by defalut it rep. row wise..

    // how we can tell element wise..
    
    // 4.
    // int arr[3][4] ={{1,111,111,1111}, {2,222,2222,22222},{3,33,333,3333}};

    //input :- row wise

    // 1.

    // for(int row=0; row<3; row++){
    //     for(int col=0; col<4; col++){
    //         cin>>arr[row][col];
    //     }
    // }

// 2.

    // for column wise..
    
    //  for(int col=0; col<4; col++){
    //    for(int row=0; row<3; row++){
    //         cin>>arr[row][col];
    //      }
    //  }
    
    // 5.

    //for search
    int arr[3][4];
    for(int row=0; row<3; row++){
       for(int col=0; col<4; col++){
           cin>>arr[row][col];
    }
     }

    //print

    for(int i=0; i<3; i++){
        for(int j=0; j<4; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    cout<<"Enter the element to search ";
    int target;
    cin>>target;

    if(ispresent(arr, target, 3,4)){
        cout<<"Element found"<<":-"<<target;

    }else{
        cout<<"Not found"<<":-"<<target;
    }


}

// complexity O[row]x[col]