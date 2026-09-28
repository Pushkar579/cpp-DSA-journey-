#include <iostream>
using namespace std;

int main() 
{
    int N;
    int prod = 0;
    int i = 1;

    cout << "Enter a number: ";
    cin >> N;

    cout << "*****TABLE*****:\n";
    for (; i <= 10; i++) 
    {
        prod = N * i;
        cout << N << " x " << i << " = " << prod << endl;
    }

    return 0;
}
