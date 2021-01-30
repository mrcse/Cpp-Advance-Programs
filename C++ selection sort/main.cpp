#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int m,myarry[5];
    cout<<"enter arry element : ";
    for(int i=0;i<5;i++)
        cin>>myarry[i];
    for(int i=0;i<4;i++)
    {
        m=i;
        for(int j=i;j<5;j++)
            if(myarry[m]>myarry[j])
                m=j;
        int temp=myarry[m];               //swap the numbers
            myarry[m]=myarry[i];          //we can also use swap() function
            myarry[i]=temp;                 //for that we have to add "bits/stdlibc++.h" librarary

    }
    cout<<"\n after selection sorting \n";
    for(int i=0;i<5;++i)
        cout<<"  "<<myarry[i];

    return 0;
}
