#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

bool uniqueocc(int arr[], int size) {
    vector<int> val;
    sort(arr, arr + size);
    int i = 0;
    
    while (i < size) {
        int count = 1;
        int j = i + 1; // Use a separate variable for the inner loop

        while (j < size && arr[i] == arr[j]) {
            count++;
            j++;
        }
        
        val.push_back(count);
        i = j;
    }

    size = val.size();
    sort(val.begin(), val.end());

    for (int i = 0; i < size - 1; i++) {
        if (val[i] == val[i + 1]) {
            return false;
        }
    }

    return true;
}

int main() {
    int arr[10] = {-3, 0, 1, -3, 1, 1, 1, -3, 10, 0};
    cout << uniqueocc(arr, 10) << endl;
    return 0;
}
