#include<bits/stdc++.h>

using namespace std;
#define MAX 1000

vector<int>prime;

void sieve(int n)
{
    bool isprime[MAX];
    for(int i=0;i<n;i++)
    {
        isprime[i]=true;
    }
    for(int i=3;i*i<=n;i+=2)
    {
        if(isprime[i])
        {
            for(int j=i*i;j<=n;j+=i)
            {
                isprime[i]=false;
            }
        }
    }
    prime.push_back(2);
    for(int i=3;i<=n;i+=2)
    {
        if(isprime[i])
        {
            prime.push_back(i);
        }
    }
}

void divisorcount(int num)
{
    sieve(sqrt(num)+1);
    int divisor=1;
    for(int i=0;i<prime.size();i++)
    {
        if(num%prime[i]==0)
        {
            int cnt=1;
            while(num%prime[i]==0)
            {
                num/=prime[i];
                cnt++;
            }
            divisor*=cnt;
        }
    }
    cout<<divisor<<endl;
}

int main()
{
    divisorcount(36);
}
