#include <iostream>

using namespace std;

int main()
{
    int c=2;
    int *ptr1=&c;
    int **ptr2=&ptr1;
    int ***ptr3=&ptr2;
    int ****ptr4=&ptr3;
    cout<<"Value of c is : "<<&c<<endl;
    cout<<"Value of *ptr1 is : "<<ptr1<<endl;
    cout<<"Value of **ptr2 is : "<<ptr2<<endl;
    cout<<"Value of ***ptr3 is : "<<***ptr3<<endl;
    cout<<"Value of ****ptr4 is : "<<ptr4<<endl;
    return 0;
}
