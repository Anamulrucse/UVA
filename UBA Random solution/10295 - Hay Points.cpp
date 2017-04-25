#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,t;
    long long int sum;
    string st,st1;
    map<string,int>p;
    scanf("%d%d",&n,&m);
    while(n--)
    {
        cin>>st;
        cin>>t;
        p[st]=t;
        st.clear();

    }
    while(m--)
    {
        sum=0;
        while(getline(cin,st)){
        if(st==".")
            break;
            for(int i=0;i<st.length();i++)
            {
                if(isalpha(st[i]))
                {
                    while(isalpha(st[i]))
                    {
                        st1+=st[i];
                        i++;
                    }
                    i--;
                    sum+=p[st1];
                    st1.clear();
                }
            }
            st.clear();
        }
        cout<<sum<<endl;
    }


}
