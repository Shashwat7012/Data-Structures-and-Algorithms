// #include <vector>
// #include <iostream>

// using namespace std;

// void merge(vector<int> &arr, int low, int mid, int high){
//     vector<int> temp;
//     int left = low;
//     int right = mid+1;
//     while(left <= mid && right <= high){
//         if(arr[left] <= arr[right]){
//             temp.push_back(arr[left]);
//             left++;
//         }
//         else{
//             temp.push_back(arr[right]);
//             right++;
//         }
//     }
//     while(left <= mid){
//         temp.push_back(arr[left]);
//         left++;
//     }
//     while(right <= high){
//         temp.push_back(arr[right]);
//         right++;
//     }
//     for(int i = low; i <= high; i++){
//         arr[i] = temp[i-low];
//     }
// }

// void ms(vector<int> &arr, int low, int high){
//     if(low == high){
//         return;
//     }
//     int mid = (low + high) / 2;
//     ms(arr, low, mid);
//     ms(arr, mid+1, high);
//     merge(arr, low, mid, high);
// }

// int main(){
//     vector<int> arr = {3, 2, 4, 1, 3}; // Use a vector instead of an array

//     int n = arr.size(); // Get the size of the vector

//     ms(arr, 0, n - 1);
//     for(int i = 0; i < n; i++){
//         cout << arr[i] << " ";
//     }
//     return 0;
// }

//complexity :- O(N X log base 2 n);

#include<iostream>
using namespace std;

void merge(int *arr, int s, int e){
    int mid = (s+e)/2;

    // we have to create a new array for the app. 1
    int len1 = mid-s+1;
    int len2 = e - mid;

    //arr = 1

    int *first = new int[len1];

    //arr = 2

    int *second = new int[len2];

    //copying values

    //for first array
    // k = mainarray index
    int k = s;
    for(int i=0;i<len1;i++){
        first[i] = arr[k++];
    }

    //for second array

        k = mid+1;
    for(int i=0;i<len2;i++){
        second[i] = arr[k++];
    }

    //merge 2 sorted array;
    int index1 = 0;
    int index2=0;
    k = s;


    while(index1<len1 && index2<len2){
        if(first[index1]<second[index2]){
            arr[k++] = first[index1++];
        }
        else{
            arr[k++] = second[index2++];
        }
    }

    while(index1 < len1){
            arr[k++] = first[index1++];

    }

    while(index2 < len2){
            arr[k++] = second[index2++];

    }

    
}

void mergeSort(int *arr, int s, int e){
    if(s>=e){
        return;
    }
    int mid = (s+e)/2;
    //left part  sort
    mergeSort(arr,s,mid);
    //right part sort
    mergeSort(arr,mid+1,e);
    //calling
    merge(arr,s,e);
}

int main(){
    int arr[] = {2,5,1,6,9};
    int n = 5;
    int s = 0; // Start index
    int e = n-1; // End index

    mergeSort(arr, s, e);
    for(int i=0; i<n; i++){
        cout << arr[i] << endl;
    }
    return 0; // Moved return statement outside the loop
}