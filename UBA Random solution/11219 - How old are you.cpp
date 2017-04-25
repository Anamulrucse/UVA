#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    scanf("%d",&n);
    int d1,d2,m1,m2,y1,y2;
    for(int i=1;i<=n;i++)
    {
        scanf("%d/%d/%d",&d1,&m1,&y1);
        scanf("%d/%d/%d",&d2,&m2,&y2);
        printf("Case #%d: ",i);
        int y=0;
        if(y1>y2)
        {
            y1--;
            y=(y1-y2);
            if(m1>m2)
                y++;
            else if(m1==m2)
            {
                if(d1>d2||d1==d2)
                    y++;
            }
            y1++;
            if(y>130)
        {
            cout<<"Check birth date"<<endl;
            continue;
        }

            cout<<y<<endl;
        }
        if(y2>y1)
        {
            cout<<"Invalid birth date"<<endl;
        }
        if(y2==y1)
        {
            if(m2>m1)
                cout<<"Invalid birth date"<<endl;
            else if(m1==m2)
            {
                if(d2>d1)
                    cout<<"Invalid birth date"<<endl;
                else
                    cout<<y<<endl;
            }
            else if(m1>m2)
                cout<<y<<endl;
        }





        }

    }

