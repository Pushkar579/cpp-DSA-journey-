using namespace std;
int main()
{
    int N;
    int count=0;
    cout<<"Enter a number: ";
    cin>>N;
    if (N==0)
    count=1;
    while(N!=0)
    {
        count++;
        N/=10;
    }
    cout<<"No.of digits: "<<count;
    return 0;
}
