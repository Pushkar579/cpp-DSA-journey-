#include <iostream>
using namespace std;
int main()
{
    int n1,n2,rem,num1,num2;
    cout<<"Enter two numbers:\n";
    cin>>n1>>n2;
    num1=n1,num2=n2;
    do{
        if(n1>n2)
        rem=n1%n2;
        else
        rem=n2%n1;
        n1=n2;
        n2=rem;
    }
    while(rem!=0);
    cout<<n1<<" is hcf\n";
    cout<<"LCM is "<<(num1*num2)/n1;
    return 0;
}
