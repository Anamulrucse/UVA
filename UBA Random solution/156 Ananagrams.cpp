#include<bits/stdc++.h>
using namespace std;
int main()
{
    string st[100000];
    string s;
    map<string,int>p;
    map<string,int>k;
 for(int i=0;i!=-1;i++)
 {
     cin>>st[i];

     if(st[i]=="#")
        break;
        s+=st[i];
        transform(s.begin(), s.end(), s.begin(), ::tolower);
        sort(s.begin(),s.end());
        //cout<<st[i]<<endl;
        k[s]++;
        s.clear();
 }
    for(int i=0;st[i]!="#";i++)
    {
        s+=st[i];
        transform(s.begin(), s.end(), s.begin(), ::tolower);
        sort(s.begin(),s.end());
        p[st[i]]=k[s];


        s.clear();
    }
    for(map<string,int>::iterator it=p.begin();it!=p.end();++it)
    {
        if(it->second==1)
            cout<<it->first<<endl;
    }
p.clear();
k.clear();
}
