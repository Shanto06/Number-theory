#include<bits/stdc++.h>
#include<set>
#include<iterator>
#include<algorithm>

using namespace std;

int main()
{
    set<string>s;
    set<string>::iterator it;

    s.insert("shanto");
    s.insert("biddut");
    s.insert("pritom");
    s.insert("jafor");



    for(it=s.begin();it!=s.end();it++)
    {
        cout<<*it<<endl;
    }


    return 0;
}
