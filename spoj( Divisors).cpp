#include<bits/stdc++.h>
using namespace std;

const int mx=1000000;
int cnt;
int divisor[mx+10];
vector<int>prime_factor[mx+10];

void sieve()
{
    for(int i=1;i<=mx;i++)
    {
        for(int j=i;j<=mx;j+=i)
            divisor[j]++;
    }
    for(int i=2;i<=mx;i++)
    {
        if(prime_factor[i].size()==0)
        {
            for(int j=i;j<=mx;j+=i)
            {
                prime_factor[j].push_back(i);
            }
        }
    }
}
int main()
{
    sieve();
    for(int i=1;i<=mx;i++)
    {
        int x=divisor[i];
        if(prime_factor[x].size()==2 && prime_factor[x][0]*prime_factor[x][1]==x)
        {
            cnt++;
            if(cnt%9==0)
                printf("%d\n",i);

        }
    }


}
