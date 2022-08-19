#include<bits/stdc++.h>
using namespace std;

int merge(int* arr, int s, int e)
{
    int inv_cnt = 0;
    int mid = s + (e-s)/2;
    int l1 = mid - s + 1;
    int l2 = e - mid;
    int* left = new int[l1];
    int* right = new int[l2];

    //copying elements from parted array
    int mainstartingindex = s;
    for(int i = 0; i<l1; i++)
        left[i] = arr[mainstartingindex++];
    
    mainstartingindex = mid + 1;
    for(int i = 0; i<l2; i++)
        right[i] = arr[mainstartingindex++];
    
    int index1 = 0;
    int index2 = 0;
    mainstartingindex = s;
    while(index1 < l1 && index2 < l2)
    {
        if(left[index1] < right[index2])
            arr[mainstartingindex++] = left[index1++];
        else
        {
            arr[mainstartingindex++] = right[index2++];
            inv_cnt+=(mid-index1);
        }
    }
    
    while(index1 < l1)
    {
        arr[mainstartingindex++] = left[index1++];
    }
    while(index2 < l2)
    {
        arr[mainstartingindex++] = right[index2++];
    }

    delete []left;
    delete []right;
    return inv_cnt;
}

int mergesort(int* arr, int s, int e)
{
    //base case
    if(s>=e)
        return 0;
    int mid = s + (e-s)/2;
    int inv_cnt = 0;
    //sorting first part of array
    inv_cnt+=mergesort(arr,s,mid);
    //sorting second part of array
    inv_cnt+=mergesort(arr,mid+1,e);
    //merging the sorted arrays
    inv_cnt+=merge(arr,s,e);
    return inv_cnt;
}

int main()
{
    int ar[] = {9,1,34,67,32,91,15};
    int s = 7;

    int ans = mergesort(ar,0,s-1);

    for(int i=0; i<s; i++)
        cout<<ar[i]<<" ";

    cout<<"Inversions= "<<ans<<endl;
}