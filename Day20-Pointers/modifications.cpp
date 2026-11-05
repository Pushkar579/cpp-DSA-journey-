#include <iostream>
using namespace std;

int Update (int *p)
{
    *p = *p + 1;
    p = p + 1;
}

int main()
{
    int num = 2;
    int *ptr = &num;
    
    cout << "Before update: " << num << " / " << *ptr << endl;
    cout << "Before update : " << ptr << endl;
    
    Update(ptr);
    
    cout << "After update: " << num << " / " << *ptr << endl;
    cout << "After update: " << ptr << endl;
}
