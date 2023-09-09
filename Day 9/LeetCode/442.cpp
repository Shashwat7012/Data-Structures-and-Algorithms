#include<iostream>
#include<vector>
using namespace std;

vector<int> alldup(int arr[], int n) {
    vector<int> ans;

    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                ans.push_back(arr[i]);
            }
        }
    }

    return ans;
}

int main() {
    int arr[6] = {1, 2, 2, 3, 5, 1};
    vector<int> duplicates = alldup(arr, 6);

    for (int i = 0; i < duplicates.size(); i++) {
        cout << duplicates[i] << " ";
    }

    return 0;
}
