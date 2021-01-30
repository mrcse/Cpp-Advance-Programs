#include <iostream>

using namespace std;

int main()
{
    int n,N=0;
    cin>>n;
    while(n!=0)
    {
        n/=10;
        N++;
    }
    cout<<N;
    return 0;
}
