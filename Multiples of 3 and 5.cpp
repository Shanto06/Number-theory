#include<bits/stdc++.h>

using namespace std;


int main()
{
    long long sum=0;

    for(int i=3;i<1000;i++)
    {
        if(i%3==0)
        {
            sum+=i;
        }
        if(i%5==0)
        {
            sum+=i;
        }
        if(i%15==0)
        {
            sum-=i;
        }
    }
    cout<<sum<<endl;


}
