#include<bits/stdc++.h>
using namespace std;
int main()
{
    char st[1000];
    int n;
    cin>>n;
    getchar();
    while(n--)
    {
        while(gets(st))
        {
            if(st[0]=='\0')
            break;
            for(int i=0;st[i]!='\0';i++)
            {
                if(st[i]=='0')
                {
                    st[i]='O';

                }
                else if(st[i]=='1')
                {
                    st[i]='I';
                }
                else if(st[i]=='2')
                {
                    st[i]='Z';
                }
                else if(st[i]=='3')
                {
                    st[i]='E';
                }
                else if(st[i]=='4')
                {
                    st[i]='A';
                }
                else if(st[i]=='5')
                {
                    st[i]='S';
                }
                else if(st[i]=='6')
                    st[i]='G';
                else if(st[i]=='7')
                    st[i]='T';
                else if(st[i]=='8')
                    st[i]='B';
                else if(st[i]=='9')
                    st[i]='P';

            }
            puts(st);
        }
        //puts(st);
    if(n!=0)
    printf("\n");

    }
}
