#include<iostream>
#include<string>
using namespace std;

void palindrome(string s)
{
    string temp="";
    int n=s.length()-1;
    for(int i=0;i<=n;i++)
    {
        if(s[i]>='A' && s[i]<='Z')
        {
            temp+=s[i]+32;
        }
        else if(s[i]>='a' && s[i]<='z')
        {
            temp+=s[i];
        }
        else if(s[i]>='0' && s[i]<='9')
        {
            temp+=s[i];
        }
    }
    bool palin=true;
    int st=0;
    int end=temp.length()-1;
    while(st<=end)
    {
        if(temp[st]!=temp[end])
        {
            palin=false;
            break;
        }
        st++;
        end--;
    }
    if(palin)
    {
        cout<<s<<" Palindrome"<<endl;
    }
    else
    {
        cout<<s<<" Not a Palindrome"<<endl;
    }
}

int main()
{
    string n="AbcRt3#2";
    string n2="a6W$$w6A";
    palindrome(n);
    palindrome(n2);
}
