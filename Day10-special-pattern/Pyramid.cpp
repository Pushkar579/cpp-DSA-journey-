#include <iostream>
using namespace std;

void pyramid(int r)
{
    for (int i = 0; i < r; i++)
    {
        for (int j = i; j < r - 1; j++)
        {
            cout << " ";
        }
        for (int j = 0; j <= i; j++)
        {
            cout << "*";
        }
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    cout << endl;
}

int main() 
{
    pyramid(5); 
    return 0;
}
