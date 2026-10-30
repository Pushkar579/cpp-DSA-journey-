#include <iostream>
using namespace std;

int main()
{
    int arr[] = {3, 7, 2, 5, 5, 6};
    int n = sizeof(arr) / sizeof(arr[0]);
    
    for (int i = 1; i < n; i++)
    {
        int j = i - 1;
        int temp = arr[i];
        for (; j >= 0; j--)
        {
            if (arr[j] > temp)
            {
                arr[j+1] = arr[j];
            }
            else
                break;
        }
        arr[j+1] = temp;
    }
    
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}
