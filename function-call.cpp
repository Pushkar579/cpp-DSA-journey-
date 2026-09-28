#include <iostream>
using namespace std;

bool isEven(int n)
{
    if (n%2==0)
        return true;
    else
        return false;
}
int maxOfThree(int a,int b ,int c)
{
    int max;
    if (a>=b)
    {
        if(a>c)
            return a;
        else
            return c;
    }
    else if (b>a)
    {
        if (b>c)
            return b;
        else
            return c;
    }
    else
        return c;
}
int factorial(int n)
{
    int f=1;
    for (int i=1;i<=n;i++)
    {
        f*=i;
    }
    return f;
}
bool isPrime (int n)
{
    if(n<2)
        return false;
    for (int i=2;i*i<=n;i++)
    {
        if (n%i==0)
            return false;
    }
    return true;
}
int main()
{
    int n1=1,n2=2,n3=17,n4=18;
    int max=maxOfThree(n1,n3,n4);
    int f=factorial(6);
    bool even=isEven(n4);
    bool prime=isPrime(n3);
}
