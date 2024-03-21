#include <bits/stdc++.h> 
int partition(vector<int> &arr, int s, int e) {
    int pivot = arr[s];
    int pivotIndex = s;
    
    for (int i = s + 1; i <= e; ++i) {
        if (arr[i] <= pivot) {
            pivotIndex++;
            swap(arr[i], arr[pivotIndex]);
        }
    }
    swap(arr[s], arr[pivotIndex]);

    return pivotIndex;
}

void solve(vector<int> &arr, int s, int e) {
    if (s < e) {
        int p = partition(arr, s, e);
        solve(arr, s, p - 1);
        solve(arr, p + 1, e);
    }
}

vector<int> quickSort(vector<int> arr)
{
    solve(arr,0,arr.size()-1);
    return arr;
}
