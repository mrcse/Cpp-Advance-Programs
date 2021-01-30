#include <iostream>

using namespace std;
bool power2(int x)
{
    return x&&(!(x&(x-1)));
}
int main()
{
    float x;
    cin>>x;
    // there are two method one is function and the other one is through loop
    // by using function
    cout<<"\n<<<<<<Using Function>>>>>> \n";
    if(power2(x))
        cout<<"Power of two confirm \n";
    else
        cout<<"Not power of two \n";
        cout<<"\n<<<<<<Using loop>>>>>> \n";
    while(x>1)
    {
        x/=2.0;
    }
    if(x==1)
        cout<<"\nPower of two confirm\n ";
    else
        cout<<"\nNot power of two";
    return 0;
}
