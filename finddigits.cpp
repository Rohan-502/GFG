int findDigits(int n) {
    int a,b=n,count=0;
    while(n>0){
        a=n%10;
        if(a>0){
        if(b%a==0){
            count++;
        }
    }
        n=n/10;
    }
    return count;
}

Input (stdin)
2
12
1012
Expected Output
2
3
