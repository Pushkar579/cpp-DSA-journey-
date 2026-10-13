#include <iostream>
using namespace std;
int main()
{
    int n,array[n];
    cout<<"Enter number of termms: ";
    cin>>n;
    cout<<"Enter the terms:";
    for(int i=0;i<n;i++)
    {
        cin>>array[i];
    }
    cout<<"*****FORWARD*****\n";
    for (int i=0;i<n;i++)
    {
        cout<<array[i]<<" ";
    }
    cout <<endl;
    cout<<"*****BACKWARD*****\n";
    for (int i=n-1;i>=0;i--)
    {
        cout<<array[i]<<" ";
    }
    return 0;
}
