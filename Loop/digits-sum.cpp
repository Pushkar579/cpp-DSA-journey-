#include <iostream>
using namespace std;
int main()
{
    int digit,n;
    int sum=0;
    cout<<"Enter number: ";
    cin>>n;
    while(n!=0)
    {
        digit=n%10;
        sum+=digit;
        n/=10;
    }
    cout <<"Sum of digits = "<<sum;
    return 0;
}
