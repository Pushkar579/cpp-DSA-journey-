#include <iostream>
using namespace std;

void InvPyramid(int r)
{
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<i;j++)
        {
            cout<<" ";
        }
        for(int j=i;j<r;j++)
        {
            cout<<"*";
        }
        for(int j=i;j<r-1;j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    cout<<endl;
}

int main()
{
    int rows = 5; 
    InvPyramid(rows);
    return 0;
}
