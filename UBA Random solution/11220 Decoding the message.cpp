#include<bits/stdc++.h>
using namespace std;
int main()
{
    char st[1000000];
    string st1,s;
    int n;
    int count,i,j=1,k;
    scanf("%d",&n);
    getchar();
    gets(st);
    while(n--)
    {
        cout<<"Case #"<<j<<":"<<endl;
        while(gets(st))
        {
            if(st[0]=='\0')
                break;
                count=1;
            k=strlen(st);
            for(i=0;i<k;i++)
            {

                if(isalpha(st[i]))
                {
                    while((isalpha(st[i])))
                    {
                        st1+=st[i];
                        i++;
                    }
                    if(st1.length()>=count)
                    {
                        s+=st1[count-1];
                        count++;
                        st1.clear();
                    }
                    st1.clear();
                    i--;
                }

            }
            cout<<s<<endl;
            s.clear();


        }
        j++;

        if(n!=0)
            printf("\n");
    }
}
