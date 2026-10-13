#include <iostream>
#include <climits>
using namespace std;
int main()
{
    int n,array[n];
    int max=INT_MIN;
    int min=INT_MAX;
    cout<<"Enter number of termms: ";
    cin>>n;
    
    cout<<"Enter the terms:";
    for(int i=0;i<n;i++)
    {
        cin>>array[i];
    }
    
    for (int i=0;i<n;i++)
    {
        if (array[i]>=max)
        {
            max=array[i];
        }
        if(array[i]<=min)
        {
            min=array[i];
        }
    }
    cout<<"max= "<<max;
    cout<<"\nmin= "<<min;
    return 0;
}
