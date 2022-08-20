#include<bits/stdc++.h>
using namespace std;

int main()
{
    int N,sum2=5;
    cin>>N;
    int arr[N];
    for(int i=0; i<N; i++)
     cin>>arr[i];
    int s=sizeof(arr)/sizeof(arr[0]);
    for(int i=1; i<(pow(2,s)); i++)
    {
        int sum=0;
        for(int j=0; j<N; j++)
        {
            if((i>>j)&1)
             sum+=arr[j];
        }
        if(sum==sum2)
         cout<<"YES\n";
    }
    cout<<"NO\n";
}