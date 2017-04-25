#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>v1;
    map<int,int>m;
    int p,t,i;
    int z,k;
    int count,po,ne;
    cin>>p;
    while(p--)
    {
        cin>>t;
        for(i=0;i<t;i++)
        {
            cin>>k;
            //v1.push_back(z);
            if(k<0)
                z=-1*k;
            else
                z=k;
            m[z]=k;
             v1.push_back(z);

        }
        sort(v1.begin(),v1.end());
        count=0;
        po=0;
        ne=0;
        for(i=0;i<t;i++)
        {
            if(m[v1[i]]>0&&po==0)
            {
                count++;
                po=1;
                ne=0;
            }
            if(m[v1[i]]<0&&ne==0)
            {
                count++;
                po=0;
                ne=1;
            }
            //cout<<m[v1[i]]<<endl;

        }
        cout<<count<<endl;
        v1.clear();
        m.clear();

    }
    return 0;
}
