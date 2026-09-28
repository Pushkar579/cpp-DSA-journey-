#include <iostream>
#include <string>

using namespace std;

int main() 
{
    int num1, num2, ans;
    string op;

    cout << "enter num1 and num2\n";
    cin >> num1 >> num2;

    cout << "Enter operation: ";
    cin >> op;

    if (op == "+") {
        ans = num1 + num2;
    } 
    else if (op == "-") {
        ans = num1 - num2;
    } 
    else if (op == "*") {
        ans = num1 * num2;
    } 
    else {
        if (num2 != 0) {
            ans = num1 / num2;
        } else {
            cout << "Error: Division by zero!" << endl;
            return 1;
        }
    }

    cout << num1 << " " << op << " " << num2 << " is " << ans << endl;

    return 0;
}
