#include <iostream>

using namespace std;
int bits(int);
int main()
{
    int x;
    cout<<"Enter integer : ";
    cin>>x;
    cout<<"number of 0's is = "<<bits(x)<<endl;
    return 0;
}
int bits(int a)
{
    int no1=0,num;
    while(a)
    {
        num=a&1;
        if(!num)
            no1++;
        a>>=1;
    }
    return no1;
}
