#include<iostream>
using namespace std;

// int isUnique(int arr[], int n) {
//     for (int i = 0; i < n; i++) {
//         bool isUnique = true;
        
//         for (int j = 0; j < n; j++) {
//             if (i != j && arr[i] == arr[j]) {
//                 isUnique = false;
//                 break;
//             }
//         }
        
//         if (isUnique) {
//             return arr[i];
//         }
//     }
//     return -1;
// }

// int main() {
//     int arr[5] = {1, 1, 2, 2, 3};

//     int uniqueElement = isUnique(arr, 5);

//     if (uniqueElement != -1) {
//         cout << "unique number is " << uniqueElement << endl;
//     }
//     else {
//         cout << "No unique number found." << endl;
//     }

//     return 0;
// }

// app second:-
int XOR(int arr[], int n){
    int ans = 0;
    for(int i = 0; i<n; i++){
        ans=ans^arr[i];
    }
    return ans;
}
int main(){
    int arr[5] = {2,2,3,3,4};
    cout<<XOR(arr,5);
}
