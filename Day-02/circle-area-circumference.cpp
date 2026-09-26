#include <iostream>
using namespace namespace std;
int main()
{
    double r,area,circum,PI;
    PI=3.14159;
    cout<<"Enter radius of circle: ";
    cin>>r;
    area=PI*r*r;
    circum=2*PI*r;
    cout<<"Area of the circle :\n"<<area;
    cout<<"\ncircumference of the circle :\n"<<circum;
    return 0;
}
