#include <iostream>
#include <bits/stdc++.h>  //for swap() function
using namespace std;

int main()
{
    int arry_1[5];
    cout<<"Enter your element in array : "<<endl;
    for(int i=0;i<5;i++)
        cin>>arry_1[i];
    for(int u=0;u<5;u++)
    for(int i=0;i<4;i++)
    {
        if(arry_1[i]<arry_1[i+1])
        {
                                                     //int temp=arry_1[i+1];
           swap(arry_1[i],arry_1[i+1]);              //arry_1[i+1]=arry_1[i];
                                                    //arry_1[i]=temp;
        }
    }
    cout<<"\n\n your element after bubble sort : \n";
    for(int i=0 ; i<5;i++)
        cout<<"  "<<arry_1[i];
    return 0;
}
