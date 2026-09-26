#include <iostream>
using namespace namespace std;
int main()
{
    int dig,n;
    int cube=0;
    cout<<"Enter number: ";
    cin>>n;
    int num=n; //saving original data in backup va
    while(n!=0)
    {
    dig=n%10;
    cube+=dig*dig*dig;
    n/=10;
    }
    if (cube==num)
    cout <<num<<" is Armstrong number.";
    else
    cout <<num<<" is not a Armstrong number";
    return 0;
}
