int multiply(int x,int res[],int res_size){
    // initialize carry to 0
    int carry =0;
  
    // One by one multiply n with individual digits of res[]
    for(int i=0;i<res_size;i++){
        int prod=res[i]*x+carry;
      
        // Store last digit of 'prod' in res[]
        res[i]= prod%10;
        
        // Put rest in carry
        carry =  prod/10;
    }
  
    // Put carry in res and increase result size
    while (carry) {
        res[res_size]=carry%10;
        carry=carry/10;
        res_size++;
    }
    return res_size;
}
void extraLongFactorials(int n) {
    int res[MAX];
    int res_size=1;
    res[0]=1;
    
    for(int x=2;x<=n;x++){
        res_size=multiply(x, res, res_size);
    }
    for(int i=res_size-1;i>=0;i--){
        cout << res[i];
    }
}
