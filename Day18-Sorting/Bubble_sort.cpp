#include <iostream>
using namespace std;
int main()
{
    int arr[]={3,7,8,11,2};
    int sz=sizeof(arr)/sizeof(arr[0]);
    bool sorted=true;
    for(int i=1;i<sz;i++)
    {
        for(int j=0;j<sz-i;j++)
        {
            if(arr[j]>arr[j+1])
            {
                swap(arr[j],arr[j+1]);
                sorted=false;
            }
        }
        if (sorted==true)
        {
            break;
        }
    }
    for(int i=0;i<sz;i++)
    {
        cout<<arr[i]<<" ";
    }
}
