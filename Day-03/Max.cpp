#include <iostream>
using namespace std;
int main()
{
    int num1,num2,num3;
    int max;
    cout <<"enter 3 numbers: \n";
    cin>>num1>>num2>>num3;
    if(num1>num2)
    {
        if (num1>num3)
        max=num1;
        else
        max=num3;
    }
    else if(num2>num3)
    {
        max=num2;
    }
    else
    {
    max=num3;
    }
    cout<<max<<" is the max of these numbers";
    return 0;
}
