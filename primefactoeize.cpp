#include<bits/stdc++.h>
///#include<limits.h>
using namespace std;

vector<int>prime;
int list1[1000];
#define MAX 1000
int listsize=0;

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
                isprime[j]=false;
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
void primefactorize(int num)
{
    sieve(sqrt(num)+1);

    for(int i=0;num!=1;i++)
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
    primefactorize(18);
    for(int i=0;i<listsize;i++)
    {
        cout<<list1[i]<<endl;
    }
}
