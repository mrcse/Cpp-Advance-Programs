#include <iostream>

using namespace std;

int main()
{
    int q,w,e;
    cin>>q>>w>>e;
    int z=q+w+e;
    if(q==0 || w==0 || e==0 ||z!=180)
        cout<<"invalid";
    else if(z==180)
        cout<<"valid";
    return 0;
}
