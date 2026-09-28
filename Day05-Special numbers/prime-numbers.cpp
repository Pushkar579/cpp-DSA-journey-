#include <iostream>
using namespace std;
int main()
{
    int n;
    bool prime;
    cout << "Enter number of terms:";
    cin >> n;
    for (int j = 2; j <= n; j++)
    {
        prime = true;
        for (int i = 2; (i * i) <= j; i++)
        {
            if ((j % i) == 0)
            {
                prime = false;
                break;
            }
        }
        if (prime)
            cout << j << " ";
    }

    return 0;
}
