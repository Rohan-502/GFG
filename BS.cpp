#include <bits/stdc++.h>

using namespace std;

int BS(int V,int a,int b,int arr[]){
    if(a==b){             //when there is only one element//
        if(arr[a]==V){
        return a;            
        }else{
        return -1;            
        }
    }else{
        int mid,n;
        mid=(a+b)/2;
        if(arr[mid]==V){
            return mid;
        }else if(arr[mid]> V){
            return BS(V,0,mid-1,arr);
        }else{
            return BS(V,mid+1,b,arr);
    }
    }
    
    return 0;
}
int main(){
    int V,arr[1001],n,i;
    cin >> V;
    cin >> n;
    for(i=0;i<n;i++){
        cin >> arr[i];
    }
    int res=BS(V,0,n-1,arr);
    cout << res;
}
