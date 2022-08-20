#include<iostream>
#define ll long long
using namespace std;
int main()
{
    ll t,n,k,q,i;
    cin>>t;
    while(t--)
    {
        ll d=-1,pre=0;
        cin>>n>>k;
        for(i=0; i<n; i++)
        {
            cin>>q;
            q+=pre;
            if(d==-1 && q<k)
              d=i;
            pre=q>k?q-k:0;
        }
        if(d==-1)
          d = n+1+pre/k;
        cout<<d<<endl;
    }
}
