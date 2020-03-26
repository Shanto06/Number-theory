#include<bits/stdc++.h>
///#include<limits.h>
using namespace std;

using ll=long long;
vector<ll>prime;
int list1[1000];
#define MAX 1000000
int listsize=0;

void sieve(ll n)
{
    bool isprime[MAX];

    for(ll i=0;i<n;i++)
    {
        isprime[i]=true;
    }
    for(ll i=3;i*i<=n;i+=2)
    {
        if(isprime[i])
        {
            for(ll j=i*i;j<=n;j+=i)
            {
                isprime[j]=false;
            }
        }
    }
    prime.push_back(2);
    for(ll i=3;i<=n;i+=2)
    {
        if(isprime[i])
        {
            prime.push_back(i);
        }
    }
}
void primefactorize(ll num)
{
    sieve(sqrt(num)+1);

    for(ll i=0;num!=1;i++)
    {
        if(num%prime[i]==0)
        {
            while(num%prime[i]==0)
            {
                num/=prime[i];
                list1[listsize]=prime[i];
                listsize++;
            }
        }
    }
    if(num>1)
    {
        list1[listsize]=num;
        listsize++;
    }
}
int main()
{
    primefactorize( 600851475143);
    for(int i=0;i<listsize;i++)
    {
        cout<<list1[i]<<" ";
    }
}
