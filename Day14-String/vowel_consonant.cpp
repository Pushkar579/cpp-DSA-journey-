#include <iostream>
using namespace std;

int main()
{
    string name = "Pushkar KUMAR";
    int len = name.length();
    int countVow = 0;
    int countCon = 0;

    for (char ch: name)
    {
        // Checks if the character is an alphabet letter
        if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z'))
        {
            if (ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U' ||
                ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
            {
                countVow++;
            }
            else
            {
                countCon++;
            }
        }
    }

    cout << name << endl;
    cout << "Number of vowels: " << countVow << endl;
    cout << "Number of consonants: " << countCon << endl;
    return 0;
}
