#include <iostream>
using namespace std;

int main()
{
    int N;

    cout << "Enter a number: ";
    cin >> N;
    cout << "Even numbers upto " << N << endl;

    for (int i = 1; i <= N; i++)
    {
        if ((i % 2) != 0)
        {
            continue;
        }
        cout << i << " ";
    }

    return 0;
}
