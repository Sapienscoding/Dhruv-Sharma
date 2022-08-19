#include<iostream>
using namespace std;

int getpivot(int arr[], int n)
{
    int start = 0; 
    int end = n-1;
    int mid = start + (end-start)/2;
    while(start<end)
    {
        if(arr[mid] > arr[0])
         start = mid+1;
        else
         end = mid;
        mid = start + (end-start)/2;
    }
    return start;
}

int main()
{
    int ar[] = {1,3,8,10,17};
    int size = sizeof(ar)/sizeof(ar[0]);
    cout<<getpivot(ar,size);
}