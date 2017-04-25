#include<bits/stdc++.h>
using namespace std;
int main()
{
    string st,st1,st2;
    int k;
    map<string,string>p;
    while(getline(cin,st))
    {
        if(st[0]=='\0')
            break;
            for(int i=0;i<st.length();i++){
                    st[i]=tolower(st[i]);
                 if(st[i]==' ')
                 {
                     i++;
                     while(isalpha(st[i]))
                     {
                         st[i]=tolower(st[i]);
                         st2+=st[i];
                         i++;
                     }
                     continue;

                 }
                 st1+=st[i];

            }

        p[st2]=st1;
        st.clear();
        st1.clear();
        st2.clear();


    }
    while(getline(cin,st1))
    {
        if(p[st1]!="")
        {
            cout<<p[st1]<<endl;
        }
        else
        {
            cout<<"eh"<<endl;
        }
        st1.clear();
    }
}
