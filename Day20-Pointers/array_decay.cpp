#include <iostream>
using namespace std;
void Array(int arr[], int size) //here arr[] is the same as *arr
{
    cout << "Size of array is: " << sizeof(arr) << endl;
}
int main()
{
    int arr[]={1,2,3,4,5};
    int size=sizeof(arr);
    cout << "size of array is : " << size << endl;
    Array(arr,5);
    char ch[]="abcdef";
    cout<< ch<< endl; //cout implementation is diff for arrays and char 
    char *ptr= &ch[0]; //cout implements operator<< for char* and prints
    cout<< ptr<< endl;
    cout<<*ptr<< endl; //prints the first character of the string
}
