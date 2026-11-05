#include<iostream>
using namespace std;

int main() {

    int arr[10] = {23, 122, 41, 67};

    cout << " address of first memory block is " << arr << endl;
    cout << arr[0] << endl;
    cout << " address of first memory block is " << &arr[0] << endl;

    cout << "1st " << *arr << endl;
    cout << "1st+1 " << *arr + 1 << endl;
    cout << "2nd " << *(arr + 1) << endl;
    cout << "2nd +1 " << *(arr+1) + 1 << endl;
    cout << "3rd " << arr[2] << endl;
    cout << "3rd +1 " << *(arr+2)+1 << endl;//arr[i]=*(arr+i)

    int i = 3;
    cout << i[arr] << endl;

    return 0;
}
