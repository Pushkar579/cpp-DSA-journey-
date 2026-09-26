#include <iostream>
using namespace std;
int main()
{
    bool leap = false;
    int year;
    cout << "Enter the year: ";
    cin >> year;
    if (((year % 100) != 0) && ((year % 4) == 0) || ((year % 400) == 0))
        leap = true;
    if (leap)
        cout << year << " is a leap year";
    else
        cout << year << " is not a leap year";
    return 0;
}
