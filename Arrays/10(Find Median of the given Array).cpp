//Find Median of the given Array
//Problem Statement: Given an unsorted array, find the median of the given array.


#include<bits/stdc++.h>

using namespace std;

void median(vector<int> arr){
    sort(arr.begin(),arr.end());
    int n=arr.size();
    if(n%2==0)
        cout<<(double)(arr[(n/2)]+arr[(n/2)-1])/2;
    else
        cout<<arr[n/2];
}

int main(){
    vector<int> arr={2,5,9,4,2,5};
    median(arr);
}
