#include <iostream>
using namespace std;
int main()
{
    int digit,n;
    int rev=0;
    cout<<"Enter number: ";
    cin>>n;
    while(n!=0)
    {
    digit=n%10;
    rev=rev*10+digit;
    n/=10;
    }
    cout <<"Reversed: " <<rev;
    return 0;
}
