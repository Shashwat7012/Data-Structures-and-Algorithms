#include <iostream>
using namespace std;

bool isSorted(int arr[], int size) {
    if (size <= 1) {
        return true;
    }
    
    if (arr[0] > arr[1]) {
        return false;
    }

    return isSorted(arr + 1, size - 1);
}

int main() {
    int arr[5];

    cout << "Enter 5 elements in the array:" << endl;
    for (int i = 0; i < 5; i++) {
        cin >> arr[i];
    }

    if (isSorted(arr, 5)) {
        cout << "Sorted" << endl;
    } else {
        cout << "Unsorted" << endl;
    }

    return 0;
}
