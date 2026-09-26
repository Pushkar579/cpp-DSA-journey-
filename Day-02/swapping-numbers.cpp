#include <iostream>
using namespace std;
int main()
{
    int num1,num2,org;
    cout<<"Enter num1: ";
    cin>>num1;
    cout<<"Enter num2: ";
    cin>>num2;
    org=num1;
    num1=num2;
    num2=org;
    cout<<"After Swapping:\nNum1 is "<<num1<<"\nnum2 is "<<num2;
    return 0;
}
