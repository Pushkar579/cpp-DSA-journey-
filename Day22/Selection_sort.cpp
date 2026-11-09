#include <iostream>
using namespace std;
int main()
{
    int arr[]={5,2,5,8,1};
    int n= 5;
    for (int i=0 ; i<n-1; i++)
    {
        int Min=i;
        for (int j=i+1; j<n; j++)
        {
            if(arr[j]<arr[Min])
            {
                Min=j;
            }
        }
        swap(arr[i],arr[Min]);
    }
    for (int i =0; i<n ; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}
