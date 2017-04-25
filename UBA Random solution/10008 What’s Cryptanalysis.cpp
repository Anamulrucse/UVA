#include<bits/stdc++.h>
using namespace std;
int main()
{
    string st;
    map<char ,int>mp;
    vector<int>v1;
    int n;
    scanf("%d",&n);
    getchar();
    while(n--)
    {
        getline(cin,st);
        for(int i=0;i<st.length();i++)
         {
             st[i]=toupper(st[i]);
             if(isalpha(st[i]))
             mp[st[i]]++;

         }
         st.clear();
    }
    for(map<char,int>::iterator it=mp.begin();it!=mp.end();++it)
    {
        v1.push_back(it->second);
    }
    sort(v1.begin(),v1.end());
    for(int i=v1.size()-1;i>=0;i--)
    {
        if(v1[i]!=v1[i-1])
      for(map<char,int>::iterator it=mp.begin();it!=mp.end();++it)
      {
          if(v1[i]==it->second)
          {
              cout<<it->first<<" "<<it->second<<endl;
          }
      }
    }
    v1.clear();
    mp.clear();
}
