#include<iostream>
using namespace std;

int maxsubarray(int a[], int n)
{
    int max_so_far=0,max_ending_here=0;
    for(int i=0; i<n; i++)
    {
        max_ending_here+=a[i];
        if(max_ending_here<0)
          max_ending_here=0;

        else if(max_so_far<max_ending_here)
        {
            max_so_far=max_ending_here;
        }
    }
    return max_so_far;
}

int main()
{
    int len;
    cin>>len;
    int arr[len];
    for(int i=0; i<len; i++)
       cin>>arr[i];
    cout<<maxsubarray(arr,len)<<endl;;
}