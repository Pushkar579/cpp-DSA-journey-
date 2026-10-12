#include <iostream>
using namespace std;

void FloydTr(int r)
{
    int num = 1;
    for (int i = 1; i <= r; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << num << " ";
            num++;
        }
        cout << endl;
    }
}

int main()
{
    // Calling the function to print Floyd's Triangle with 5 rows
    FloydTr(5);
    
    return 0;
}
