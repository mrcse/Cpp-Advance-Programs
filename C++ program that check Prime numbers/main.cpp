#include <iostream>

using namespace std;
bool prime(int a)
    {int j=0;
    for(int i=1;i<=a;i++)
    {
        if(a%i==0)
        j++;
    }
    if(j==2)
        return true;
    else
        return false;
}
int main()
{
    for(int i=1 ; i<=1000;i++)
    {
        if(prime(i))
            cout<<"\t"<<i;
    }
    return 0;
}
