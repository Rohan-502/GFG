// vector<int> circularArrayRotation(vector<int> a, int k, vector<int> queries) {
//     vector<int> res;
//     for(int i=0;i<k%a.size();i++){
//         int temp=a[a.size()-1];
//         for(int j=a.size()-1;j>0;j--){
//             a[j]=a[j-1];
//         }
//         a[0]=temp;        
//     }
//     for(int i=0;i<queries.size();i++){
//         int j=queries[i];
//         res.push_back(a[j]);
//     }
//     return res;
// }  
// 4 test cases failed due to timeout.


vector<int> circularArrayRotation(vector<int> a, int k, vector<int> queries) {
    k = k % (int)a.size();
    rotate(a.begin(),a.begin()+a.size()-k,a.end());
    vector<int> temp;
    for(int i=0; i<(int)queries.size(); i++) {
        temp.push_back(a[queries[i]]);
    }
    return temp;
}


Input:
3 2 3
1 2 3
0
1
2
Expected Output
2
3
1
