#include <bits/stdc++.h>
#include<iostream>
using namespace std;


int main(){
    int arr[100][100];
    int n,sum1=0,sum2=0,i,j;
    cin >> n ;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin >> arr[i][j];
        }
    }
    for(i=0;i<n;i++){
        sum1=sum1+arr[i][i];
    }
    i=0;
    for(j=n-1;j>=0;j--){
        sum2=sum2+arr[j][i];
        i++;
    }
    sum1=abs(sum1-sum2);
    cout << sum1;
}
