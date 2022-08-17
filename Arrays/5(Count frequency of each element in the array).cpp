//Count frequency of each element in the array
//using hash maps

#include<bits/stdc++.h>

using namespace std;

void frequency(int arr[], int n){
    unordered_map<int,int> map;
    
    for(int i=0; i<n; i++){
        map[arr[i]]++;
    }
    
    for(auto x: map){
        cout<<x.first<<" "<<x.second<<"\n";
    }
}

int main(){
    int arr[8]={2,5,4,2,5};
    frequency(arr,5);
}
