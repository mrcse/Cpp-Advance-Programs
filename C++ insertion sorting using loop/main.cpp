#include <iostream>

using namespace std;

int main()
{
    int   arr[5],i, temp, j;
    for( i=0;i<5;i++)
        cin>>arr[i];
    for (i = 1; i < 5; i++)
    {
        temp = arr[i];
        for(j=i-1; j >= 0 && arr[j] > temp;j--)
            arr[j + 1] = arr[j];
        arr[j + 1] = temp;
    }
    for( i=0;i<5;i++)
        cout<<"\n"<<arr[i];
    return 0;
}
