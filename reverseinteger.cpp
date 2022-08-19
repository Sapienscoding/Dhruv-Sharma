#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int rev_n=0;
    while(n!=0)
    {
        int digit = n % 10;
        if((rev_n > INT8_MAX/10) || (rev_n < INT8_MIN/10))
         return 0;
        rev_n = (rev_n * 10) + digit;
        n = n/10;
    }
    cout<<"After reversing the number: "<<rev_n<<endl;
}