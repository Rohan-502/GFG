int squares(int a, int b) {
    int res,A,B;
    A=int(sqrt(a));
    B=int(sqrt(b));
    res=B-A;
    if(A*A>=a){
        res++;
    }
    
    return res;
}
Input (stdin)
  
2 35 70
100 1000
  
Expected Output

3
22
