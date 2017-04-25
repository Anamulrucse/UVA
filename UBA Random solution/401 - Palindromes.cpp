#include<bits/stdc++.h>
using namespace std;
int main()
{
    string st,st1,s;
    string k;
    while(getline(cin,st))
    {
        st1+=st;
        s+=st;
        reverse(st1.begin(),st1.end());
        int count=0;
        for(int i=0;i<s.length();i++)
        {
            if(s[i]=='A')
                {
                    s[i]='A';
                    count++;
                }
            else if(s[i]=='E')
               {
                   s[i]='3';
                   count++;
               }
            else if(s[i]=='H')
               {
                   s[i]='H';
                   count++;
               }
            else if(s[i]=='I')
                {
                    s[i]='I';
                    count++;
                }
            else if(s[i]=='J')
                {
                    s[i]='L';
                    count++;
                }
            else if(s[i]=='M')
               {
                   s[i]='M';
                   count++;
               }
            else if(s[i]=='O')
                {
                    s[i]='O';
                    count++;
                }
            else if(s[i]=='T')
                {
                    s[i]='T';
                    count++;
                }
           else if(s[i]=='U')
                {
                    s[i]='U';
                    count++;
                }
            else if(s[i]=='V')
               {
                   s[i]='V';
                   count++;
               }
            else if(s[i]=='W')
                {
                    s[i]='W';
                    count++;
                }
            else if(s[i]=='X')
                {
                    s[i]='X';
                    count++;
                }
            else if(s[i]=='Y')
                {
                    s[i]='Y';
                    count++;
                }
            else if(s[i]=='Z')
                {
                    s[i]='5';
                    count++;
                }
            else if(s[i]=='1')
                {
                    s[i]='1';
                    count++;
                }
            else if(s[i]=='2')
               {
                   s[i]='S';
                   count++;
               }
            else if(s[i]=='3')
                {
                    s[i]='E';
                    count++;
                }
            else if(s[i]=='5')
                {
                    s[i]='Z';
                    count++;
                }
            else if(s[i]=='8')
                {
                    s[i]='8';
                    count++;
                }
            else if(s[i]=='L')
            {
                s[i]='J';
                count++;
            }
            else if(s[i]=='S')
            {
                s[i]='2';
                count++;
            }

        }
        reverse(s.begin(),s.end());
        //cout<<s<<endl;
        //cout<<count<<endl;
        //cout<<s.length()<<endl;
        if(st==s&&st==st1&&count==s.length())
            cout<<st<<" -- is a mirrored palindrome."<<endl;
        else if(st==s&&count==s.length())
            cout<<st<<" -- is a mirrored string."<<endl;
        else if(st==st1)
            cout<<st<<" -- is a regular palindrome."<<endl;
        else
            cout<<st<<" -- is not a palindrome."<<endl;
        printf("\n");
        s.clear();
        st1.clear();
        st.clear();


    }
}
