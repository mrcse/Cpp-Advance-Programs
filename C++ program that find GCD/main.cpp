#include <iostream>
using namespace std;
int gcd(int x,int y)
{
    static int temp=x*y;          // remove temp from every then it will convert to hvf
    if (y)
        return temp/gcd(y,x%y);
    else
        return temp/x;

}
int main()
{ int a=15,b=10;
    cout << "result : "<<gcd(a,b) ;
return 0;
}
