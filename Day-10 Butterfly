#include <iostream>
using namespace std;

int main() {
    int r = 5; // Total rows for the top half

    for (int i = 1; i <= r; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        // prints the spaces in between
        for (int j = 2 * r; j > 2 * i; j--)
        {
            cout << " ";
        }
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }

        cout << "\n";
    }
    for (int i=1;i<r;i++)
    {
        for (int j=r-1;j>=i;j--)
        {
            cout<<"*";
        }
        for (int j=1;j<=2*i;j++)
        {
            cout<<" ";
        }
        for (int j=i;j<r;j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}
