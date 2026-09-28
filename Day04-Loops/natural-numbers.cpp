#include <iostream>
using namespace std;
int main()
{
    int N;
    int i = 1;
    cout << "Enter a number: ";
    cin >> N;
    cout << "Counting numbers till number :\n";
    for (; i <= N; i++)
        cout << i << " ";
    return 0;
}
