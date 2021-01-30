#include<iostream>

using namespace std;

long int fact(int);   //function declaration
int main()
{
	int n, r;
	long int ncr, npr,nCr;
	cout<<"Enter the value of n : ";
	cin>>n;
	cout<<"Enter the value of r : ";
	cin>>r;
	npr=fact(n)/fact(n-r);    // calling the function or function calling
	ncr=fact(n)/(fact(r)*fact(n-r));
	cout<<"NPR value = "<<npr<<"\n";
	cout<<"NCR value = "<<ncr<<"\n";
	return 0;
}
long int fact(int x)          //defining the function or function definition
{
	if(x==0)
        return 1;
    else
        return x*fact(x-1);
}
