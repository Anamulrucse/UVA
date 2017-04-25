#include<bits/stdc++.h>
using namespace std;
int main()
{
    string st,st1;
    int count,i;
    while(getline(cin,st))
    {
        count=0;
        for(i=0;i<st.length();i++)
        {
            if((st[i]=='B'||st[i]=='F'||st[i]=='P'||st[i]=='V')&&count!=1)
               {
                   st1+='1';
                   count=1;
               }
           else if((st[i]=='C'||st[i]=='G'||st[i]=='J'||st[i]=='K'||st[i]=='Q'||st[i]=='S'||st[i]=='X'||st[i]=='Z')&&count!=2)
                {
                    st1+='2';
                    count=2;
                }
                else if((st[i]=='D'||st[i]=='T')&&count!=3)
                    {
                        st1+='3';
                        count=3;
                    }
                else if(st[i]=='L'&&count!=4)
                   {
                       st1+='4';
                       count=4;
                   }
                else if((st[i]=='M'||st[i]=='N')&&count!=5)
                    {
                        st1+='5';
                        count=5;
                    }
                    else if(st[i]=='R'&&count!=6)
                    {
                        st1+='6';
                        count=6;
                    }
                    else if(st[i]=='A'||st[i]=='E'||st[i]=='I'||st[i]=='O'||st[i]=='H'||st[i]=='W'||st[i]=='Y'||st[i]=='U')
                    {
                        count=0;
                    }
                    //cout<<count<<endl;

        }
        cout<<st1<<endl;
        st.clear();
        st1.clear();
    }
    return 0;
}
