#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    string st,st1;
    char t;
    int array[101];
    map<char ,int> m;
    int i,k,T;
    double count;
    cin>>T;
    getchar();
    while(T--)
    {
        cin>>k;
        getchar();
        for(i=0;i<k;i++)
        {
            cin>>t;
            st+=t;
            cin>>array[i];
        }
        cin>>n;
        getchar();
        while(n--)
        {
            getline(cin,st1);
            for(i=0;i<st1.length();i++)
           {
               m[st1[i]] ++;
            }
        }
        count=0;
        for(i=0;i<st.length();i++)
        {
            count+=(m[st[i]]*array[i]);
            //cout<<m[st[i]]<<endl;
        }
        count=count/100.0;
        printf("%.2lf$\n",count);
        st.clear();
        m.clear();
        st1.clear();

    }
return 0;
}
