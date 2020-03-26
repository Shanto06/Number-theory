#include<bits/stdc++.h>

using namespace std;
#define M 1000000
bool marked[M];

void sieve(int n)
{
    for(int i=3;i*i<=n;i+=2)
    {
        if(marked[i]==false) ///i is a prime
        {
            for(int j=i*i;j<=n;j+=i+i)
            {
                marked[j]=true;
            }
        }
    }
}

bool isprime(int n)
{
    if(n<2)
        return false;
    if(n==2)
        return false;
    if(n%2==0)
        return false;
    if(marked[n]==false)
        return true;
    else
        return false;

}
int main()
{


    return 0;
}
