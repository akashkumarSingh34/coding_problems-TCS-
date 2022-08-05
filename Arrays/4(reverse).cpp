int reversearr(int arr[], int n){
    for(int i=0; i<n/2; i++){
        arr[i]=arr[i]+arr[n-i-1];
        arr[n-i-1]=arr[i]-arr[n-i-1];
        arr[i]=arr[i]-arr[n-i-1];
    }
    return arr;
}

//reverse(arr,arr+n); built in function
