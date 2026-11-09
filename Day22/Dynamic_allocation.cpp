#include <iostream>
using namespace std;
int Product (int *a, int n){
    int prod=1;
    for (int i=0; i<n; i++)
    {
        prod *= a[i];
    }
    return prod;
}
int main(){
    // int arr1[n]; stack memory allocation error;  as n is not known at compile time
    int n;
    cin >> n;
    int* arr= new int [n]; //heap memory allocation
    for (int i=0; i<n ;i++)
    {
        cin >> arr[i];
    }
    cout << Product(arr,n);
    delete[] arr;
    return 0;
}
