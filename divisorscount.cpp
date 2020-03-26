#include<bits/stdc++.h>
using namespace std;
int divisor=0;
int countdivisor(int n)
{
    for(int i=1;i*i<=n;i++)
    {
        if(i*i==n)
        {
            divisor+=1;
        }
        else if(n%i==0)
        {
            divisor+=2;
        }
    }
    return divisor;
}
int main()
{
    countdivisor(12);
    cout<<divisor<<endl;
}
