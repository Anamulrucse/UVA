#include<bits/stdc++.h>
using namespace std;
int main()
{
    string st,st1;
    char s;
    int n,i,t;
    cin>>n;
    getchar();
    for(i=1;i<=n;i++)
    {
        getline(cin,st);
        for(int j=0;j<st.length();j++)
        {
            if(isalpha(st[j]))
            {
                s=st[j];

                j++;
                t=0;
                while(isdigit(st[j]))
                {

                    t=10*t+st[j]-'0';
                    j++;
                }
                if(t!=0)
                {
                    for(int k=1;k<=t;k++)
                        st1+=s;
                        j--;
                }
            }
        }
        cout<<"Case "<<i<<": "<<st1<<endl;
        st1.clear();
        st.clear();

    }
}
