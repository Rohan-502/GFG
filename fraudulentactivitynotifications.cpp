//count sort concept used.

#include<bits/stdc++.h>

using namespace std;

int arr[2000001];
int freq[201]={0};

int twice_median(int days)
{
    int sum=0;

    for (int i = 0; i < 201; ++i)
    {
        sum+=freq[i];

        if(2*sum> days)  //when days are odd
        {
            return (2*i);
        }
        else if( 2*sum==days) //when days are even
        {
            for(int j=i+1;; j++)
            {
                if(freq[j])
                {
                    return i+j;    // no need to divide by 2 for getting avg bcoz                                       
//                                    anyhow we will again multiply by 2 for                                           
//                                    checking condition 
                }
            }
        }
    }

    return -1;
}

int main()
{
    int n; // size of array
    int days; // no of trailing days
    int count=0;

    cin>>n>>days;

    for (int i = 0; i < n; ++i)
    {
        cin>>arr[i];
    }

    for (int i = 0; i < n; ++i)
    {
        if(i>=days)
        {
            if(arr[i]>=twice_median(days))
            {
                count++;
            }

            freq[arr[i-days]]--; // will remove the count from our freq array

        }
        freq[arr[i]]++;
    }

    cout<<count;

    return 0;
}



Input (stdin)
9 5
2 3 4 2 3 6 8 4 5
Expected Output
2
