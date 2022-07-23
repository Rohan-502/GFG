vector<int> countingSort(vector<int> arr) {
    vector<int> res,res1;
    for(int i=0;i<100;i++){ 
        //initializing  0's in new array called res//
        res.push_back(0);
    }
    for(int i=0;i<arr.size();i++){
        int a=arr[i];
        res[a]++; //counted frequency of each no.//
    }
    for(int j=0;j<res.size();j++){
        int i=res[j]; //taking each numbers freq ...
        for(int c=0;c<i;c++){
            res1.push_back(j); //and pushing that many times in new array to get sorted array//
        }
    }return res1;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string n_temp;
    getline(cin, n_temp);

    int n = stoi(ltrim(rtrim(n_temp)));

    string arr_temp_temp;
    getline(cin, arr_temp_temp);

    vector<string> arr_temp = split(rtrim(arr_temp_temp));

    vector<int> arr(n);

    for (int i = 0; i < n; i++) {
        int arr_item = stoi(arr_temp[i]);

        arr[i] = arr_item;
    }

    vector<int> result = countingSort(arr);

    for (size_t i = 0; i < result.size(); i++) {
        fout << result[i];

        if (i != result.size() - 1) {
            fout << " ";
        }
    }

    fout << "\n";

    fout.close();

    return 0;
}


Input (stdin)
7
19 10 12 10 24 25 22
Expected Output
10 10 12 19 22 24 25
