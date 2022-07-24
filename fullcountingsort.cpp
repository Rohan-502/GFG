#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;



int main() {
    long int n;
    cin >> n;
    
    string ar[n];
    
    for(long int i = 0; i < n/2; i++){
        int x;
        cin >> x;
        
        string s;
        cin >> s;
        
        ar[x] = ar[x] + "-" + " ";
        
    }

    
    for(long int i = n/2; i < n; i++){
        int x;
        cin >> x;
        
        string s;
        cin >> s;

        ar[x] = ar[x] + s + " ";
        
    }
    
    
    for(int i = 0; i < n; i++)
        cout << ar[i];

    return 0;
}




Input (stdin)
20
0 ab
6 cd
0 ef
6 gh
4 ij
0 ab
6 cd
0 ef
6 gh
0 ij
4 that
3 be
0 to
1 be
5 question
1 or
2 not
4 is
2 to
4 the

Expected Output
- - - - - to be or not to be - that is the question - - - -
