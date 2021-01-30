#include <iostream>

using namespace std;
int lcm(int a, int b)
{ // in my point of view the product of denominator divide by its hcf=LCM
    static int m=a*b;
    if (a != b)
    {
        if (a > b)
        {
            return lcm(a - b, b);
        }
        else
        {
            return lcm(a, b - a);
        }
    }
    // here 'a' is the hcf and 'm' is the product of denominator
    else
        return m/a;
}
int main()
{
    int a,b;
    cin>>a>>b;
    cout<<"lcm is : "<<lcm(a,b);
    return 0;
}
