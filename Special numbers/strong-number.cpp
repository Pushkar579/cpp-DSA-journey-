#include <iostream>
using namespace std;
int main()
{
    int num,dig;
    int sum=0;
    int f;
    cout<<"Enter a number: ";
    cin>>num;
    int n=num;
    while(num!=0)
    {
        f=1;
        dig=num%10;
        for(int i=1;i<=dig;i++){
        f*=i;
        }
        sum+=f;
        num/=10;
    }
    if(sum==n)
    cout<<n<<" is a strong number";
    else
    cout<<n<<" is not a strong number";
    return 0;
}
