#include<iostream>
using namespace std;

//time complexity=O(n)
//space complexity=O(1)
int maxprofit(int a[], int n)
{
    int profit=0,bp=INT8_MAX;
    for(int i=0; i<n; i++)
    {
        if(a[i]<bp)
         bp=a[i];
        else if(a[i]-bp>profit)
         profit=a[i]-bp;
    }
    return profit;
}

//time complexity=O(n^2)
//space complexity=O(n)
int maxprofit2(int a[],int n)
{
    int profit=0;
    for(int i=0; i<n; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            if(a[j]-a[i]>profit)
             profit=a[j]-a[i];
        }
    }
    return profit;
}
//Brute-force approach

int main()
{
    int len;
    cin>>len;
    int arr[len];
    for(int i=0; i<len; i++)
     cin>>arr[i];
    cout<<maxprofit2(arr,len)<<endl;
}
