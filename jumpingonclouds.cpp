int jumpingOnClouds(vector<int> c, int k) {
    int a,n=c.size(),i=0,e=100;
    do{
        a=(i+k)%n;
        if(c[a]==1){
            e-=3;
        }else{
            e-=1;
        }
        i=a;
    }while(a!=0);
    return e;

}

Input (stdin)
10 3
1 1 1 0 1 1 0 0 0 0
Expected Output
80
