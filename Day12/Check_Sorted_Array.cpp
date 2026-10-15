#include <iostream>
using namespace std;

void CheckSorted(int arr[], int n)
{
    for(int i = 0; i < n - 1; i++)
    {
        if (arr[i] <= arr[i+1])
        {
            continue;
        }
        else {
            cout << "Array is not in ascending order\n";
            return;
        }
    }
    cout << "Array is in ascending order\n";
}

int main()
{
    int n;
    cout << "Enter size of array: ";
    cin >> n;
    
    int array[n]; 
    int arr2[] = {7, 4, 4};
    int arr3[] = {1, 2, 3, 8, 7};
    
    cout << "Enter the array: ";
    for(int i = 0; i < n; i++)
    {
        cin >> array[i];
    }
    
    CheckSorted(array, n);
    CheckSorted(arr2, 3);
    CheckSorted(arr3, 5);
    
    return 0;
}
