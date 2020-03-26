
#include<bits/stdc++.h>
#include<limits.h>
using namespace std;

#define MAX 1000000
vector<int>primes;
void sieve(int n)
{
    int i,cnt=0,count=0;
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
    primes.push_back(2);
    for(int i=3;i<=n;i+=2)
    {
        if(isprime[i])
        {
            cnt++;
            primes.push_back(i);
            if(cnt==24)///here cnt=cnt+1
            {
                cout<<i<<endl;
            }
        }
    }
//    for(int i=1;i<=cnt;i++)
//    {
//        ///cout<<primes[i]<<endl;
//        count++;
//    }

        ///cout<<(cnt+1)<<endl;

}


int main()
{
   sieve(1000000);
}
