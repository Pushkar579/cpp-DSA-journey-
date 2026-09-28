#include <iostream>
using namespace std;
int main()
{
    int num1=1;
    int num2=0;
    int sum=0;
    int n;
    cout<<"Enter number of terms: ";
    cin>>n;
    cout<<"***Fibonacci series***\n";
    for(int i=0;i<n;i++)
    {
        cout<<num2<<" ";
        sum=num1+num2;
        num2=num1;
        num1=sum;
    }
    return 0;
}
