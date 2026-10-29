#include <bits/stdc++.h> 
int allocateBooks(vector<int> &pages, int n)
{
int st=0;
int end=n-1;
int pagesSum=0;
for (int val: pages)
{
	pagesSum+=val;
}
int minimum=pagesSum;
int sum1=0,diff=0;
while(st<end)
{
sum1+=pages[st];
diff=pagesSum-sum1;
if(sum1>diff)
{
	minimum=min(sum1,minimum);
}
else
minimum=min(diff,minimum);
st++;
}
return minimum;
