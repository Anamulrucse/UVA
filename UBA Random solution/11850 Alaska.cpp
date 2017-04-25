#include<bits/stdc++.h>
using namespace std;
int main()
{
   vector<int>v1;
   int i,n,t;
   while(scanf("%d",&n)&&n)
   {
       for(i=0;i<n;i++)
       {
           cin>>t;
           v1.push_back(t);

       }
       sort(v1.begin(),v1.end());
       t=0;
       for(i=0;i<n-1;i++)
       {
           if(v1[i+1]-v1[i]>200)
           {
               t=1;
               break;
           }
       }
       if(t==0&&(1422-v1[n-1])<=100)
        cout<<"POSSIBLE"<<endl;
       else
        cout<<"IMPOSSIBLE"<<endl;
       v1.clear();
   }
return 0;
}
