#include <iostream>
#include <climits>
using namespace std;
int main()
{
    int n,array[n];
    int sum=0;

    cout<<"Enter number of termms: ";
    cin>>n;

    cout<<"Enter the terms:";
    for(int i=0;i<n;i++)
    {
        cin>>array[i];
    }

    for (int i=0;i<n;i++)
    {
        sum+=array[i];
    }

    cout<<"Sum= "<<sum;
    cout<<"\naverage= "<<double(sum)/n;
    return 0;
}
