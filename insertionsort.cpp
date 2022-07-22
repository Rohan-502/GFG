#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);

/*
 * Complete the 'insertionSort2' function below.
 *
 * The function accepts following parameters:
 *  1. INTEGER n
 *  2. INTEGER_ARRAY arr
 */

void insertionSort2(int n, vector<int> arr) {
    for(int i=1;i<arr.size();i++){
        int b=i;
        for(int j=0;j<i;j++){
            if(arr[b]<arr[b-1]){
                swap(arr[b],arr[b-1]);
                b--;
            }   
        }
        for(int a=0;a<arr.size();a++){
                cout << arr[a] << " ";
            }
        cout << endl;
    }
}

int main()
{
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

    insertionSort2(n, arr);

    return 0;
}

 Input (stdin):
// 8
// 8 7 6 5 4 3 2 1
 Expected Output:
// 7 8 6 5 4 3 2 1
// 6 7 8 5 4 3 2 1
// 5 6 7 8 4 3 2 1
// 4 5 6 7 8 3 2 1
// 3 4 5 6 7 8 2 1
// 2 3 4 5 6 7 8 1
// 1 2 3 4 5 6 7 8

