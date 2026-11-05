#include<iostream>
using namespace std;
int main()
{
    int a[20] = {1,2,3,5};
    cout << &a[0] << endl;
    cout << &a << endl;
    cout << a << endl;

    int *p = &a[0];
    cout << p << endl;
    cout << *p << endl;
    cout << &p << endl;
    int arr[10];

    //ERROR
    //arr = arr+1; address of array is constant and cannot be changed

    int *ptr = &arr[0];
    cout << ptr << endl;
    ptr = ptr + 1;
    cout << ptr << endl;

    return 0;
}
