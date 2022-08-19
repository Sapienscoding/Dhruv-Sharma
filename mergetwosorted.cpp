#include<bits/stdc++.h>
using namespace std;

void merge(int a[], int b[], int n, int m)
{
    int i=0,j=0,k=n-1;
    while(i<=k && j<m)
    {
        if(a[i] < b[j])
         i++;
        else
         swap(b[j++],a[k--]);
    }

    sort(a,a+n);
    sort(b,b+m);
}

void print(int a[], int b[], int n, int m)
{
    for(int i=0; i<n; i++)
     cout<<a[i]<<" ";
    for(int i=0; i<m; i++)
     cout<<b[i]<<" ";
}

int main()
{
    int arr[] = {1,3,5,7};
    int l1 = sizeof(arr)/sizeof(arr[0]);
    int arr1[] = {0,2,6,8,9};
    int l2 = sizeof(arr1)/sizeof(arr1[0]);
    merge(arr,arr1,l1,l2);
    print(arr,arr1,l1,l2);
}