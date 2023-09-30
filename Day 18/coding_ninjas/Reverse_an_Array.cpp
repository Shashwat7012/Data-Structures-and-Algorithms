#include <bits/stdc++.h> 
void reverseArray(vector<int> &arr , int m)
{
	 int s = m+1;
    int e = arr.size()-1;
    while(s<=e){
        swap(arr[s],arr[e]);
        s++;
        e--;
    }
    
}
// same as reverse but in this we have a given a position. we have to reverse after that position.
