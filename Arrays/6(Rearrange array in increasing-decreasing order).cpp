//Rearrange array in increasing-decreasing order
//print 1st half in increasing order and 2nd half in decreasing order

#include<bits/stdc++.h>

using namespace std;

void incdec(vector<int> arr){
    sort(arr.begin(),arr.end());
    for(int i=0; i<arr.size()/2; i++)
        cout<<arr[i]<<" ";
    for(int i=n-1; i>arr.size()/2; i--)
        cout<<arr[i]<<" ";
}

int main(){
    vector<int> arr[8]={2,5,4,2,5};
    indec(arr);
}
