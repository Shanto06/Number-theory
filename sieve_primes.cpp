#include<bits/stdc++.h>
#include<limits>

using namespace std;

///using ll=long long
#define MAX 100000
vector<int>primes;

void sieve()
{
    bool isprime[MAX];

    for(int i=0;i<MAX;i++)isprime[i]=true;
    for(int i=3;i*i<=MAX;i+=2)
    {
        if(isprime[i])
        {
            for(int j=i*i;j<=MAX;j+=i)
            {
              isprime[j]=false;
            }
        }
    }
    primes.push_back(2);
    for(int i=3;i<MAX;i+=2)
    {
        if(isprime[i])
            primes.push_back(i);
    }
}

void segsieve(long long l,long long r)
{

    long long cnt=0;
    bool isprime[r-l+1];
    for(int i=0;i<r-l+1;i++)isprime[i]=true;

    if(l==1)isprime[0]=false;

    for(int i=0;primes[i]*primes[i]<=r;i++){
    int currentprime=primes[i];

    long long base=(l/currentprime)*currentprime;

    if(base<l)
    {
        base+=currentprime;
    }
    for(long long j=base;j<=r;j+=currentprime)
    {
        isprime[j-l]=false;
    }
    if(base==currentprime)
    {
        isprime[base-l]=true;
    }
    }
    for(int i=0;i<r-l+1;i++)
    {
        if(isprime[i])
        {
            cout<<(i+l)<<endl;
            //cnt++;
        }
    }
    //cout<<cnt<<endl;
}

int main()
{
    sieve();
    int t;
    long long l,r;
    cin>>t;
    while(t--)
    {
        cin>>l>>r;
        segsieve(l,r);
    }


    return 0;
}
