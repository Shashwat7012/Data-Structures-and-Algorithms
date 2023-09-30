#include <bits/stdc++.h>

vector<int> ninjaAndSortedArrays(vector<int>& arr1, vector<int>& arr2, int m, int n) {
    int i = m - 1; // Index of the last element in arr1
    int j = n - 1; // Index of the last element in arr2
    int k = m + n - 1; // Index of the last position in arr1

    // Merge elements from the end to the beginning
    while (i >= 0 && j >= 0) {
        if (arr1[i] >= arr2[j]) {
            arr1[k] = arr1[i];
            i--;
        } else {
            arr1[k] = arr2[j];
            j--;
        }
        k--;
    }

    // If there are remaining elements in arr2, copy them to arr1
    while (j >= 0) {
        arr1[k] = arr2[j];
        j--;
        k--;
    }
    
    // arr1 now contains the merged and sorted elements
    return arr1;
}
