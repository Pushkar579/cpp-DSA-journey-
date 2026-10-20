#include <iostream>
#include <string>
#include <cctype> // For isalnum and tolower

using namespace std;

void palindrome(string s)
{
    int st = 0;
    int end = s.length() - 1;
    bool palin = true;

    while (st < end) {
        // Skip non-alphanumeric characters from the left
        if (!isalnum(s[st])) {
            st++;
        }
        // Skip non-alphanumeric characters from the right
        else if (!isalnum(s[end])) {
            end--;
        }
        // Both pointers are at alphanumeric characters; compare them
        else {
            if (tolower(s[st]) != tolower(s[end])) {
                palin = false;
                break;
            }
            st++;
            end--;
        }
    }

    if (palin) {
        cout << s << " Palindrome\n"; // '\n' is faster than endl
    } else {
        cout << s << " Not a Palindrome\n";
    }
}

