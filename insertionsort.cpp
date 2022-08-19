#include<iostream>
using namespace std;

void ins_sort(int arr[], int n)
{
    for(int i=1; i<n; i++)
    {
        int tmp = arr[i];
        int j=i-1;
        for(;j>=0; j--)
        {
            if(arr[j] > tmp)
             arr[j+1] = arr[j];
            else
             break;
        }
        arr[j+1] = tmp;//for placing the element that has been compared at its correct place which is 1 greater than the current jth index
    }
}

void print(int arr[], int n)
{
    for(int i=0; i<n; i++)
     cout<<arr[i]<<" ";
}

int main()
{
    int ar[] = {10,1,7,4,8,2,11};
    int size = sizeof(ar)/sizeof(ar[0]);
    ins_sort(ar,size);
    print(ar,size);
}