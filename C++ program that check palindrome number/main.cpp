#include <iostream>

using namespace std;

int main()
{
    int n,r,s=0;
    cin>>n;
    int j=n;
    while(n!=0)
    {
        r=n%10;
        s=s*10+r;
        n/=10;
    }
    if(j==s)
        cout<<"Palindrome";
    else
        cout<<"NOt palindrome";
    return 0;
}
