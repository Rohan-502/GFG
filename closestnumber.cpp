vector<int> closestNumbers(vector<int> arr) {
    vector<int> res;
    sort(arr.begin(),arr.end());
    int i,min=10000;
    for(i=0;i<arr.size()-1;i++){
        if(arr[i+1]-arr[i]<min){
            min=arr[i+1]-arr[i];
        }
    }
    for(i=0;i<arr.size()-1;i++){
        if(arr[i+1]-arr[i]==min){
            res.push_back(arr[i]);
            res.push_back(arr[i+1]);
        }
        
    }
        
    return res;
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

    vector<int> result = closestNumbers(arr);

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
10
-20 -3916237 -357920 -3620601 7374819 -7330761 30 6246457 -6461594 266854
Expected Output
-20 30
