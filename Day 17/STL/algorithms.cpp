#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    vector<int>v;
    v.push_back(1);
    v.push_back(3);
    v.push_back(6);
    v.push_back(7);
    v.push_back(19);
    //binary Search algo.
    cout<<"finding 19"<<endl;
    cout<<binary_search(v.begin(),v.end(),19);

    //for lower bound

    // returs iterator:-
    //   cout<<"lower_bound"(lower_bound(v.begin(),v.end(),19)-v.begin())<<endl;

    // max,min,swap
    int a=10;
    int b=20;
    cout<<"Maximum is "<<max(a,b);
    cout<<"Maximum is "<<min(a,b);
    // cout<<"Maximum is "<<swap(a,b);

    swap(a,b);
    cout<<endl<<"a-->"<<a<<endl;

    string abcd = "abcd";
    //reverse
    reverse(abcd.begin(),abcd.end());
    cout<<abcd;

    //rotate:-
    rotate(v.begin(),v.begin()+1,v.end());
    cout<<"after rotate"<<endl;
    for(int i:v){
        cout<<i<<" ";
    }cout<<endl;

    //sort
    sort(v.begin(),v.end());
    // Sort depends upon introsort :- quick sort, heap sort, insertion sort
    for(int i:v){
        cout<<i<<" ";
    }


}