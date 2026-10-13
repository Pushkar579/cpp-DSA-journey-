#include <iostream>
using namespace std;
int main()
{
    int n,array[n];
    int st=0;
    int end;
    cout<<"Enter number of termms: ";
    cin>>n;
    end=n-1;
    cout<<"Enter the terms:";

    for(int i=0;i<n;i++)
    {
        cin>>array[i];
    }

    while(st<end)
    {
        swap(array[st],array[end]);
        st++;
        end--;
    }
    cout<<"*****Reversed*****\n";
    for (int i=0;i<n;i++)
    {
        cout<<array[i]<<" ";
    }
    return 0;
}
