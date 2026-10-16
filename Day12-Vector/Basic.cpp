#include <iostream>
#include <vector>

using namespace std;
int main()
{
    vector<int> nums;
    nums.push_back(1);
    nums.push_back(3);
    nums.push_back(5);
    nums.push_back(6);
    nums.push_back(0);
    int sz=nums.size();

    cout<<"The elements of vector are: ";
    for(int val: nums)
    {
    cout<<val<<" ";
    }
    cout<<" \nRemoving last two numbers: ";
    nums.pop_back();
    nums.pop_back();
    for (int val: nums)
    cout << val<< " ";
    return 0;
}
