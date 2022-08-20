#include<iostream>
using namespace std;

void rightrotate(int a[], int n, int outofplace, int cur)
{
    char temp=a[cur];
    for(int i=cur; i>outofplace; i--)
     a[i]=a[i-1];
    a[outofplace]=temp;
    return;    
}

void rearrange(int b[], int l)
{
    int outofplace=-1;
    for(int index=0; index<l; index++)
    {
        if(outofplace>=0)
        {
            /*if the element at index is positive
            and the element at outofplace is negative
            OR if the element at index is negative and
            the element at outofplace is positive then we will
            right rotate that array from index to outofplace*/
            if((b[index]>=0 && b[outofplace]<0) || (b[index]<0 && b[outofplace]>=0))
            {
                rightrotate(b,l,outofplace,index);
                if(index-outofplace >= 2)
                 outofplace+=2;
                else
                 outofplace=-1;
            }
        }

        if(outofplace==-1)
        {
            if(((b[index]>=0) && (!(index & 0x01))) || ((b[index]<0) && (index & 0x01)))
             outofplace=index;
        }
    }
    return;
}

void print(int c[], int s)
{
    for(int i=0; i<s; i++)
     cout<<c[i]<<" ";
    return;
}

int main()
{
    int len;
    cin>>len;
    int arr[len];
    for(int i=0; i<len; i++)
     cin>>arr[i];
    rearrange(arr,len);
    print(arr,len);
}
//space complexity=O(1)