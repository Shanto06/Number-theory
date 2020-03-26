#include<bits/stdc++.h>
using namespace std;

int divsum(int n)
{
    if(n<2)
        return 0;
    int cnt=1;
    for(int i=2;i*i<=n;i++)
    {
       if(i*i==n)cnt+=i;
       else if(n%i==0)cnt+=i,cnt+=(n/i);
    }
    return cnt;
}
int main()
{
    int T,n,p;
    cin>>T;
    while(T>0)
    {
        cin>>n;
        p=divsum(n);
        cout<<p<<endl;
        T--;
    }
}
