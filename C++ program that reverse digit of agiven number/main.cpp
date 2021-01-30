#include <iostream>

using namespace std;

int main()
{
    int x,s=0,r;
    cout << "Enter an Integer and get Reverse of it!!!!" << endl;
    cin>>x;
    while(x!=0)
    {
        r=x%10;
        x=x/10;
        s=s*10+r;

    }
    cout<<"The reversed of your integer = "<<s<<endl;
    return 0;
}
