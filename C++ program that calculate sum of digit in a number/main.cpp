#include <iostream>

using namespace std;

int main()
{
    int n,sum=0,r,N=0;
    cin>>n;
    while(n!=0)
    {
        r=n%10;
        sum=sum+r;
        n/=10;
        N++;
    }
    cout<<"number of digits is : "<<N<<endl;
    cout<<"sum of digidt is : "<<sum;
    return 0;
}
