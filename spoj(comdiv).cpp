#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;

int GCD(int A,int B)
{
    return B==0?A:GCD(B,A%B);
}
int comdiv(int n)
{
    int divisor=0;
    for(int i=1;i*i<=n;i++)
    {
        if(i*i==n)
        {
            divisor+=1;
        }
        else if(n%i==0)
        {
            divisor+=2;
        }
    }
    return divisor;
}
int main()
{
    int T,a,b,p;


    cin>>T;
    while(T>0)
    {
        scanf("%d%d",&a,&b);
        p=GCD(a,b);
       printf("%d\n",comdiv(p));
        T--;
    }
}
