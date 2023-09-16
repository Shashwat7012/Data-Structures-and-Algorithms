// You have to allocate the the number of books to m students 
// such that maximum number of pages assigned to a student is minimum.

#include<iostream>
using namespace std;


bool isPossible(int arr[], int n, int m, int mid){
    int studentCount = 1;
    int pageSum = 0;

    for(int i =0; i<n; i++){
        if(pageSum + arr[i] <= mid){
            pageSum = pageSum + arr[i];
            pageSum += arr[i];
        }
        else{
            studentCount++;
            if(studentCount > m || arr[i]>mid){
                return false;
            }

            pageSum = arr[i];
        }
    }
    return true;
}


int main()
{
    int arr[5] = {25 ,46, 28, 49, 24};
    int n = 5;
    int m = 2;

    int s = 0;
   int sum = 0;
   
   for (int i = 0; i < n; i++) {
       sum += arr[i];
   }
   int e = sum;
   int ans = -1;
   int mid = s+(e-s)/2;

   while (s <= e) {
       int mid = s + (e - s) / 2;
       
       if (isPossible(arr, n, m, mid)) {
           ans = mid;
           e = mid - 1;  // Adjust 'e' to search for a smaller 'mid'
       } else {
           s = mid + 1;
       }
       mid = s+(e-s)/2;
   }

   cout<<ans;
   

}