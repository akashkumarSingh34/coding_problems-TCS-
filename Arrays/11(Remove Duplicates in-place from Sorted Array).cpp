//Remove Duplicates in-place from Sorted Array


#include<bits/stdc++.h>
using namespace std;

int duplicate(vector <int> arr){
    int i=0;
    for(int j=0; j<arr.size(); j++){
        if(arr[i]!=arr[j])
            i++;
        arr[i]=arr[j];
    }
    return i+1;
}


int  main(){
    vector <int> arr={1,1,1,2,2,2,3,3};
    cout<<duplicate(arr);
    return 0;
}
