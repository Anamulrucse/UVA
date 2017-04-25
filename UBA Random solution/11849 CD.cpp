#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int N,M;
    long long t;
    int count;
    map<int,int>p;
    while(scanf("%lld%lld",&N,&M)&&(N||M))
    {
        while(N--)
        {
            cin>>t;
            p[t]++;
        }
        while(M--)
        {
            cin>>t;
            p[t]++;
        }
        count=0;
        for(map<int,int>::iterator it=p.begin();it!=p.end();it++)
        {
            if(it->second==2)
                count++;
        }
        cout<<count<<endl;
        p.clear();

    }
}
