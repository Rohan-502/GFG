vector<int> cutTheSticks(vector<int> arr) {
    vector<int> res;
    sort(begin(arr), end(arr));
    int i = 0;
    while(i < arr.size()){
        res.push_back(arr.size()-i);
        int c = arr[i];
        while(i<arr.size() and c == arr[i])
            i++;
    }
    return res;
}

Input (stdin)
8
1 2 3 4 3 3 2 1
Expected Output
8
6
4
1
