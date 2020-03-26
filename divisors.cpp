#include<bits/stdc++.h>
using namespace std;

 int divisor=0;
 int divsize=0;
 int divi[100000];

int divisors(int n)
{

    for(int i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            divi[divsize]=i;
            divsize++;
           divisor++;
        }
    }
    return divi[divsize];
}
int main()
{
    divisors(6);
    //cout<<divisor<<endl;
    for(int i=0;i<divsize;i++)
    {
        cout<<divi[i]<<endl;
    }
}
