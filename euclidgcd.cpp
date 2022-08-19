#include<iostream>
using namespace std;

int gcd(int a, int b)
{
    if(b == 0)
      return a;
    else
      return gcd(b,a%b);
}

int main()
{
    int x,y;
    cin>>y;
    cout<<"the gcd of these two numbers is :"<<gcd(x,y)<<endl;
}
