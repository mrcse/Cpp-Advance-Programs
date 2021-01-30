//long division method.
#include<iostream>
#include<math.h>
using namespace std;
double  power(double a)
{
    double power=a;
    for (int i=1;i<=5;i++)
    {
        power*=0.5;
    }

    return power;
}
int main() {
int n;
cin >> n;
cout << "My Square root : "<<power(n);
cout<<"\n\nBuilt in square root : "<<sqrt(n);
return 0;
}
