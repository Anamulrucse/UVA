#include<bits/stdc++.h>
using namespace std;
int main()
{
    map<string,int>p;
    string st;
    int T,N;
    int D;
    int i,j,k;
    cin>>T;
    getchar();
    for(i=1;i<=T;i++)
    {
        cin>>N;
        getchar();
        while(N--)
        {
            cin>>st;
            cin>>k;
            p[st]=k;
            st.clear();
        }
        cin>>k;
        cin>>st;
        //cout<<p[st]<<endl;
        if(p[st]==0)
            cout<<"Case "<<i<<": Do your own homework!"<<endl;
        else if(p[st]<=k)
            cout<<"Case "<<i<<": Yesss"<<endl;
        else if(p[st]<=k+5)
            cout<<"Case "<<i<<": Late"<<endl;
        else if(p[st]>k)
            cout<<"Case "<<i<<": Do your own homework!"<<endl;
        p.clear();
        st.clear();


    }
}
