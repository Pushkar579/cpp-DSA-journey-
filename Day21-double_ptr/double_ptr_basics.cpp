#include<iostream>
using namespace std;

int main() {

    int i = 5;
    int* p = &i;
    int** p2 = &p;

    cout << i << endl;
    cout << *p << endl;
    cout << **p2 << endl;

    cout << &i << endl;
    cout << p << endl;
    cout << *p2 << endl;

    int first = 110;
    int *q = &first;
    int **r = &q;
    int second = (**r)++ * 9;
    cout << first << " " << second << endl;

    return 0;
}
