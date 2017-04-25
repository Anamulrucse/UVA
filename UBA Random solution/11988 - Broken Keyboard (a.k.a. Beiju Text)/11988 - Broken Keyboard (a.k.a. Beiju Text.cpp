#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i;
    string s;
    string st,st1;
    list<string>l1;
    list<string>::iterator it;
    while(getline(cin,st))
    {
        for(i=0;i<st.length();i++)
        {
            if(st[i]=='[')
            {
                i++;
                while(isalpha(st[i])||st[i]=='_')
                {
                    if(st[i]!='['&&st[i]!=']')
                    st1+=st[i];
                    i++;
                }
                i--;
                l1.push_front(st1);
                st1.clear();
                continue;
            }
            if(st[i]!='['&&st[i]!=']')
                    s+=st[i];

        }
        l1.push_back(s);

      for (it=l1.begin(); it!=l1.end(); ++it)
    cout<<*it;
    s.clear();
    st.clear();
    l1.clear();
    cout<<endl;

    }


}
