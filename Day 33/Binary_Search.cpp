#include <iostream>
using namespace std;

bool BSearch(int *arr, int s, int e, int k) {
    // base case: element not found
    if (s > e) {
        return false;
    }

    int mid = s + (e - s) / 2;

    // element found
    if (arr[mid] == k) {
        return true;
    }

    if (arr[mid] < k) {
        return BSearch(arr, mid + 1, e, k);
    } else {
        return BSearch(arr, s, mid - 1, k);
    }
}

int main() {
    int arr[6] = {2, 4, 6, 10, 14, 18};
    int key = 10;

    if (BSearch(arr, 0, 5, key)) {
        cout << "Element " << key << " is present." << endl;
    } else {
        cout << "Element " << key << " is not present." << endl;
    }

    return 0;
}
