#include <iostream>
#include <string>
#include <cctype>   
#include <algorithm> 

using namespace std;

void palindrome(string s)
{
    string temp = "";
    for (char c : s) {
        if (isalnum(c)) {
            temp += tolower(c);
        }
    }
    
    // 2. Check if palindrome by comparing forward and reverse directions
    bool palin = equal(temp.begin(), temp.end(), temp.rbegin());
    
    // 3. Print result
    if (palin) {
        cout << s << " Palindrome" << endl;
    } else {
        cout << s << " Not a Palindrome" << endl;
    }
}
