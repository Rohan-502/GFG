vector<int> permutationEquation(vector<int> p) {
    vector<int> res;
    for(int i=1;i<=p.size();i++){
        auto it = find(p.begin(),p.end(),i);
        int a=distance(p.begin(), it);
        auto it1= find(p.begin(),p.end(),a+1);
        int b=distance(p.begin(), it1);
        res.push_back(b+1);
    }
    return res;
}


Input (stdin)
  
5
4 3 5 1 2
Expected Output

1
3
5
4
2
