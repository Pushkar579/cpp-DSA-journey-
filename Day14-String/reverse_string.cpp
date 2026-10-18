#include <iostream>
#include <string>

using namespace std;

int main()
{
    string name = "Pushkar KUMAR";
    int len;
    int st = 0;
    
    len = name.length();
    int end = len - 1;
    
    cout << name << endl;
    cout << len << endl;
    
    while (st < end)
    {
        swap(name[st], name[end]);
        st++;
        end--;
    }
    
    cout << name << endl;
    
    return 0;
}

