#include<bits/stdc++.h>
using namespace std;

    int main()
{
        int max;
        int n,t;
        int count;
            map<string,int>p;
            string st[5],st1;
            while(scanf("%d",&n)&&n)
{
                getchar();
                max=0;
            while(n--){
                            t=4;
                            for(int i=0;i<=4;i++)
                {
                                cin>>st[i];
                }
                    sort(st,st+5);
                        for(int i=0;i<=4;i++)
            {
                st1+=st[i];
            }
//cout<<st1<<endl;
                    p[st1]++;
            //cout<<p[st1]<<endl;
                if(p[st1]>max)
                max=p[st1];
                st1.clear();
                    }
                    count=0;
                    //cout<<count<<endl;
        for(map<string,int>::iterator it=p.begin();it!=p.end();++it)
        {
            if(it->second==max)
        {
            count+=max;
            //cout<<count<<endl;
        }

        }
            p.clear();
        cout<<count<<endl;
            }
}

