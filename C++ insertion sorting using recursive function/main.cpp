#include <iostream>

using namespace std;
void insertionSortRecursive(int arr[], int n)
{
    if (n <= 1)
        return;
    int temp = arr[n-1],j;
    for(j=n-2;j >= 0 && arr[j] > temp;j--)
        arr[j+1] = arr[j];
    arr[j+1] = temp;
    insertionSortRecursive( arr, n-1 );
}
int main()
{
    int   arr[5],i, temp, j;
    for( i=0;i<5;i++)
        cin>>arr[i];
    insertionSortRecursive(arr,5);
    for( i=0;i<5;i++)
        cout<<"\n"<<arr[i];
    return 0;
}
