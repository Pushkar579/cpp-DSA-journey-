#include <iostream>
using namespace std;

int main()
{
    int N;
    int sum = 0;
    int i = 1;

    cout << "Enter a number: ";
    cin >> N;

    for (; i <= N; i++)
    {
        sum += i;
    }

    cout << "Sum of counting numbers upto " << N << " = " << sum;
    return 0;
}
