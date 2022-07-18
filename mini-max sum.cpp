void miniMaxSum(vector<int> arr) {
    long long  i,sum=0;
    for(i=0;i<arr.size();i++){
        sum+=arr[i];
    }
    sort(arr.begin(),arr.end());
    cout<< sum-arr[4] <<" " << sum-arr[0];
}
