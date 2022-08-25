//Remove Duplicates From an Unsorted Array


#include<bits/stdc++.h>
using namespace std;

int duplicate(vector <int> arr){
    map <int,int> mp;
    for(int i=0; i<arr.size(); i++){
        if(mp.find(arr[i])==mp.end()){
            cout<<arr[i];
            mp[arr[i]]++;
        }
    }
    return mp.size();
}


int  main(){
    vector <int> arr={1,1,1,2,1,2,3,3,4,3};
    cout<<duplicate(arr);
    return 0;
}
