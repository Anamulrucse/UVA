#include<bits/stdc++.h>
using namespace std;
int main()
{
    string st,st1;
    char s;
    int n,i;
    while(getline(cin,st))
    {
        for(i=0;i<st.length();i++)
        {
            if(isalpha(st[i]))
            {
                if(st[i]=='a'||st[i]=='e'||st[i]=='i'||st[i]=='o'||st[i]=='u'||st[i]=='A'||st[i]=='E'||st[i]=='I'||st[i]=='O'||st[i]=='U')
                while((isalpha(st[i])))
                {
                    st1+=st[i];
                    i++;
                }
                else
                {
                    s=st[i];
                    i++;
                    while((isalpha(st[i])))
                    {
                        st1+=st[i];
                        i++;
                    }
                    st1+=s;
                }
                st1+="ay";
                i--;
            }
            else
            {
                st1+=st[i];

            }
        }
        cout<<st1<<endl;
        st.clear();
        st1.clear();
    }
}
