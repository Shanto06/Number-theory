#include<bits/stdc++.h>

using namespace std;

vector<int>primes;
#define MAX 1000
void sieve(int n1)
{
    bool isprime[MAX];
    for(int i=0;i<n1;i++)
    {
        isprime[i]=true;
    }
    for(int i=3;i*i<=n1;i+=2)
    {
        if(isprime[i])
        {
            for(int j=i*i;j<=n1;j+=i)
            {
                isprime[i]=false;
            }
        }
    }
    primes.push_back(2);
    for(int i=3;i<=n1;i+=2)
    {
        if(isprime[i])
        {
            primes.push_back(i);
        }
    }
}
void divisorsum(int n)
{

    sieve(sqrt(n)+1);
    int sum=1;
    int cnt=1;
    for(int i=0;i<primes.size();i++)
    {
        if(n%primes[i]==0)
        {

            while(n%primes[i]==0)
            {
                n/=primes[i];
                cnt++;
            }
            sum*=(pow(primes[i],cnt)-1)/(primes[i]-1);
        }
    }
    cout<<sum<<endl;



}
int main()
{

    int T,n;
    cin>>T;
    while(T>0)
    {
        cin>>n;
          divisorsum(n);
           T--;
    }

}
