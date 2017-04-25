#include<bits/stdc++.h>
using namespace std;
int main()
{
    double s;
    map<string,int>p;
    string st;
    int n,t=0;
    int count;
    cin>>n;
    getchar();
    getline(cin,st);
    while(n--)
    {

        count=0;

        while(getline(cin,st))
        {
            count++;

            if(st[0]=='\0')
                break;
            p[st]++;
            st.clear();

        }
        count--;
    for(map<string,int>::iterator it=p.begin();it!=p.end();++it)
    {

        s=it->second/float(count);
        cout<<it->first<<" ";
        printf("%.4lf\n",s*100);
    }
    if(n!=0)
        printf("\n");
    p.clear();
    }
}
