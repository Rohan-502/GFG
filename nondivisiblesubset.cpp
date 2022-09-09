int nonDivisibleSubset(int k, vector<int> s) {
   int ans=0;
   map<int , int > m;
//    for(int i=0;i<s.size();i++){
//        m[s[i]%k]++;
//    }
   for(auto x:s){
       m[x%k]++;
   }
   if(m[0]>0){
       ans++;
   }
   
   for(int i=1;i<k;i++){
       if(m[i]==0) continue;
       if(i+i==k){
           ans++;
       }else {
           ans+=max(m[i],m[k-i]);
           m[i]=0;
           m[k-i]=0;
       }
   }
   return ans;
}

Input (stdin)
15 7
278 576 496 727 410 124 338 149 209 702 282 718 771 575 436
Expected Output
11

// refer for concept : https://www.youtube.com/watch?v=NvuzTl-jTRY
